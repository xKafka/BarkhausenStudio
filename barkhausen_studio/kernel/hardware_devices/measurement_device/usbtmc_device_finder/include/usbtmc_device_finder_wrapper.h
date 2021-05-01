//
// Created by fkafka on 29. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_USBTMC_DEVICE_FINDER_WRAPPED_H
#define BARKHAUSEN_STUDIO_USBTMC_DEVICE_FINDER_WRAPPED_H

#include <string_view>
#include "usbtmc_device_finder_python.h"
#include <vector>
#include <device_description.h>
#include <measurement_device_core.h>
#include <usbtmc_settings.h>
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
        SharedData<UsbtmcSettings> settings;

        settings->change(UsbtmcSettingName::Resource, resource);

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

    DeviceDescription separate_name_description(std::string_view view)
    {
        DeviceDescription out;

        //!to do .. this is not vector type ... should return a vector

        //"DEVICE ID 0957:1618 on Bus 001 Address 007 =================\n

        auto device_id_position = view.find(Separators::id);

        const auto id_position = view.data() + device_id_position + Separators::id.size();

        out.id_product = std::string(id_position, Separators::std_id_size);

        out.id_vendor = std::string(id_position + Separators::std_id_size + 1, Separators::std_id_size);

        auto bus_position = view.find(Separators::bus);

        out.bus = std::string(view.data() + bus_position + Separators::bus.size(), Separators::std_bus_size);

        auto address_position = view.find(Separators::address);

        out.address = std::string(view.data() + address_position + Separators::address.size(), Separators::std_addr_size);

        out.resource = "USB::0x" + out.id_product + "::0x" + out.id_vendor + "::INSTR";

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
            auto device_description = separate_name_description(response);

            m_available_devices.push(get_name(device_description.resource), device_description);

            return { false, m_available_devices };
        }
        else
        {
            return { true, m_available_devices };
        }
    }
};

#endif //BARKHAUSEN_STUDIO_USBTMC_DEVICE_FINDER_WRAPPED_H
