//
// Created by fkafka on 25. 3. 2021.
//

#include <measurement_device_core.h>
#include <settings_names.h>
#include <utils.h>
#include <QDebug>

MeasurementDeviceCore::MeasurementDeviceCore(SharedData<UsbtmcSettings> &usbtmc_settings)
    :   m_buffer{ },
        m_settings_ref{ usbtmc_settings }
{
}

MeasurementDeviceCore::~MeasurementDeviceCore()
{
    if(is_cont_acq_running())
        cont_acq_stop();
}

void MeasurementDeviceCore::init()
{
    if(m_device.init_agilent(m_settings_ref->get(UsbtmcSettingName::Resource)))
    {
        set_open();
    }
    else
        set_closed();

}

std::string MeasurementDeviceCore::get_device_name() const
{
    return m_device.name();
}

void MeasurementDeviceCore::set_data_len(std::string_view size)
{
    const auto int_data_len = m_settings_ref->get<int>(UsbtmcSettingName::PointsPerChunk) * 4;

    m_device.set_data_len(std::to_string(int_data_len));
}

void MeasurementDeviceCore::wait_for_data_ready()
{
    m_device.wait_for_data_ready();
}

void MeasurementDeviceCore::send_command(std::string_view command)
{
    m_device.send_message(command);
}

char* MeasurementDeviceCore::read() const
{

}

void MeasurementDeviceCore::set_ref_voltage(const double val)
{
    auto send_it = [&]()
    {
        m_device.send_message(
                                "SOUR:VOLT " +
                                Utility::Cast::to_string(val) +
                                ",(@" +
                                m_settings_ref->get(UsbtmcSettingName::SourcePort) +
                                ")"
                                );
    };

    if(m_device.is_open())
    {
        send_it();
    }
    else
    {
        init();

        if(m_device.is_open())
            send_it();
    }

}

unsigned char* MeasurementDeviceCore::get_sample()
{
    if(m_continuous_acq)
    {
        m_device.send_message("RUN\n");

        m_device.wait_for_data_ready();

        m_device.send_message("WAV:DATA?\n");

        auto resp = m_device.read();

        auto last_data_red_size = m_device.last_data_len();

        memmove(m_buffer, resp, last_data_red_size);
    }
    else
    {
        static constexpr auto one_shot_raw_data_size { 4 * 1000 + 10 };

        m_device.send_message("DIG\n");

        try
        {
            m_device.wait_for_data_ready();
        }
        catch(...)
        {
            auto pica = 50;
        }


        m_device.send_message("WAV:DATA?\n");

        memmove(m_buffer, m_device.read(), one_shot_raw_data_size);
    }

    return m_buffer;
}

std::string MeasurementDeviceCore::ask(std::string_view command)
{
    return m_device.ask_device(command);
}

void MeasurementDeviceCore::reset()
{
    m_device.reset();
}

void MeasurementDeviceCore::cont_acq_stop()
{
    m_device.send_message("STOP\n");

    m_continuous_acq = false;
}

void MeasurementDeviceCore::cont_acq_start()
{
    m_continuous_acq = true;

    set_data_len(m_settings_ref->get(UsbtmcSettingName::PointsPerChunk));
}

