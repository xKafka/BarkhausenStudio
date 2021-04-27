//
// Created by fkafka on 25. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_IMPL_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_IMPL_H

//this is the base class for every measurement device that is going to be written in the future !!!

#include <string>

class MeasurementDeviceImpl
{
    bool m_is_open { false };

protected:
    void set_open() { m_is_open = true; }
    void set_closed() { m_is_open = false; }

public:
    MeasurementDeviceImpl() = default;
    virtual ~MeasurementDeviceImpl() = default;

    [[nodiscard]] bool is_open() const { return m_is_open; }

    [[nodiscard]] virtual std::string get_device_name() const = 0;

    virtual void set_data_len(std::string_view) = 0;

    virtual void wait_for_data_ready() = 0;

    virtual void reset() = 0;

    virtual void send_command(std::string_view command) = 0;

    [[nodiscard]] virtual char* read() const = 0;

    [[nodiscard]] virtual unsigned char* get_sample() = 0;

    virtual std::string ask(std::string_view command) = 0;
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_IMPL_H
