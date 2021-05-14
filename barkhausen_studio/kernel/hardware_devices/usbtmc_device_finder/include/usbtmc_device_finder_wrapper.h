//
// Created by fkafka on 29. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_USBTMC_DEVICE_FINDER_WRAPPED_H
#define BARKHAUSEN_STUDIO_USBTMC_DEVICE_FINDER_WRAPPED_H

#include <string_view>
#include "usbtmc_device_finder_python.h"
#include <vector>
#include <device_description.h>
#include <measurement_device_settings.h>
#include <measurement_device_core.h>
#include <mem_types.h>

namespace Separators
{
    constexpr std::string_view id{ "DEVICE ID "};
    constexpr std::string_view address{ "Address "};
    constexpr std::string_view bus{ "Bus "};

    constexpr auto std_id_size{ 4 };
    constexpr auto std_bus_size{ 3 };
    constexpr auto std_addr_size{ 3 };
}

class UsbtmcDeviceFinder
{
    PyObject* m_device;

    AvailableDevices m_available_devices;

    bool create_py_finder()
    {
        Py_Initialize();
        initusbtmc_device_finder_python();

        m_device = create_finder_py_class();

        return m_device != nullptr;
    }

    std::string get_name(const std::string &resource)
    {
        SharedData<MeasurementDeviceSettings> settings;

        settings->change(MeasDeviceSetting::Resource, resource);

        MeasurementDeviceCore device{ settings };

        device.init();

        return device.get_device_name();
    }

public:
    UsbtmcDeviceFinder()
    {
        create_py_finder();
    }

    [[nodiscard]] auto &devices() const { return m_available_devices; }

    ~UsbtmcDeviceFinder()
    {
        Py_Finalize();
    }

    std::vector<DeviceDescription> separate_name_description(std::string_view view)
    {
        std::vector<DeviceDescription> out;

        //!to do .. this is not vector type ... should return a vector

        //"DEVICE ID 0957:1618 on Bus 001 Address 007 =================\n

        auto find_ids = [](std::string_view in, std::string_view what)
        {
            std::vector<std::string_view::size_type> ret_val;

            auto pos = in.find(what, 0);

            while(pos != std::string_view ::npos)
            {
                ret_val.push_back(pos);

                pos = in.find(what, pos + what.size());
            }

            return ret_val;
        };

        for(const auto iterator : find_ids(view, Separators::id))
        {
            DeviceDescription next;

            const auto id_position = view.data() + iterator + Separators::id.size();

            next.id_product = std::string(id_position, Separators::std_id_size);

            next.id_vendor = std::string(id_position + Separators::std_id_size + 1, Separators::std_id_size);

            auto bus_position = view.find(Separators::bus);

            next.bus = std::string(view.data() + bus_position + Separators::bus.size(), Separators::std_bus_size);

            auto address_position = view.find(Separators::address);

            next.address = std::string(view.data() + address_position + Separators::address.size(), Separators::std_addr_size);

            next.resource = "USB::0x" + next.id_product + "::0x" + next.id_vendor + "::INSTR";

            out.push_back(next);
        }

        return out;
    }

    auto find_available_devices() -> std::pair<bool, AvailableDevices &>
    {
        m_available_devices.data_unsafe().clear();

        auto is_response_valid = [&](const char* resp)
        {
            if(resp == nullptr)
            {
                return false;
            }

            std::string_view view{ resp };

            return !view.empty() && view != "empty";
        };

        find_devices(m_device);

        auto response = available_devices(m_device);

        if(is_response_valid(response))
        {
            for(const auto& desc : separate_name_description(response))
            {
                m_available_devices.push(get_name(desc.resource), desc);
            }

            return { false, m_available_devices };
        }
        else
        {
            return { true, m_available_devices };
        }
    }
};

#endif //BARKHAUSEN_STUDIO_USBTMC_DEVICE_FINDER_WRAPPED_H
