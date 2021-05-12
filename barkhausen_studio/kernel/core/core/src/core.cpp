//
// Created by fkafka on 15. 4. 2021.
//

#include <core.h>

Core::Core()
    :   m_settings_storage{ },
        m_buffer{ },
        m_device_finder{  },
        m_data_creator{ m_settings_storage ,m_buffer }
{
    connect(m_settings_storage->usbtmc_settings.get(), &UsbtmcSettings::changed, this, [&]()
    {
        start_meas_sequence();
    });

    connect(m_settings_storage->usbtmc_settings.get(), &UsbtmcSettings::changed, this, [&]()
    {
        stop_meas_sequence();
    });
}

void Core::start_meas_sequence()
{
    m_data_creator->start_meas_sequence();
}

void Core::stop_meas_sequence()
{
    m_data_creator->stop_meas_sequence();
}

void Core::single_meas_sequence()
{
    m_data_creator->single_meas_sequence();
}