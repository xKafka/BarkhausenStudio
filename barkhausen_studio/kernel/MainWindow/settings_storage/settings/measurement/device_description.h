//
// Created by fkafka on 21. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_USBTMC_AVAILABLE_DEVICE_H
#define BARKHAUSEN_STUDIO_USBTMC_AVAILABLE_DEVICE_H

#include <string>
#include <nlohmann/json.hpp>

struct DeviceDescription
{
    std::string id_vendor;
    std::string id_product;
    std::string bus;
    std::string address;
    std::string resource;
};

struct AvailableDevices
{
    std::map<std::string, DeviceDescription> m_data;

public:
    AvailableDevices() = default;

    [[nodiscard]] bool are_available() const { return !m_data.empty(); }

    void push(const std::string &name, const DeviceDescription &other)
    {
        m_data.emplace(name, other);
    }

    auto &data() const { return m_data; }

    auto &data_unsafe() { return m_data; }
};

#endif //BARKHAUSEN_STUDIO_USBTMC_AVAILABLE_DEVICE_H
