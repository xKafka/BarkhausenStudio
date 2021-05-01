//
// Created by fkafka on 15. 4. 2021.
//

#include <core.h>

Core::Core()
    :   m_settings_storage{ },
        m_buffer{ },
        m_device_finder{  },
        m_device{ m_settings_storage, m_buffer },
        m_data_creator{ m_settings_storage ,m_buffer }
{
    connect(m_device.get(), &MeasurementDeviceHolder::new_data_available, m_data_creator->worker(), &DataCreatorWorker::process_data);

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
    m_device->start_continuous_acq();
}

void Core::stop_meas_sequence()
{
    m_device->stop_continuous_acq();
}

void Core::single_meas_sequence()
{
    m_device->single_shot();
}