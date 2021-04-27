//
// Created by fkafka on 15. 4. 2021.
//

#include <data_creator_worker.h>
#include <QDebug>

DataCreatorWorker::DataCreatorWorker()
    :   m_buffer{ },
        m_device{ std::make_unique<MeasurementDeviceHolder>(m_buffer) }
{
    connect(m_device.get(), &MeasurementDeviceHolder::new_data_available, this, &DataCreatorWorker::process_new_measured_data);
}

void DataCreatorWorker::set_settings_storage_controller(SharedData<SettingsStorage> &settings)
{
    if(!settings.is_empty())
    {
        m_settings_storage_ref = settings;

        m_device->set_settings_storage_controller(settings);
    }
    else
    {
        throw std::runtime_error("DataCreatorWorker::set_settings_storage_controller pointer value error");
    }
}

void DataCreatorWorker::start_continuous_acq()
{
    m_device->start_continuous_acq();
}

void DataCreatorWorker::stop_continuous_acq()
{
    m_device->stop_continuous_acq();
}

void DataCreatorWorker::single_shot_acq()
{
    m_device->single_shot();
}

void DataCreatorWorker::process_new_measured_data()
{
    auto &sett = m_settings_storage_ref->usbtmc_settings;

    const auto sample_rate = std::atof(sett->sample_rate.data());

    const auto &bark_data = m_buffer->measurement_data.barkhausen_data();

    const auto &B_H_data = m_buffer->measurement_data.current_data();

    const auto time_step = static_cast<double>(bark_data.size()) / sample_rate;

    double start = 0.0;

    for(const auto value : bark_data)
    {
        m_buffer->iu_data.barkhausen_ui_data.push_back({ start, value });

        start += time_step;
    }

    start = 0.0;
/*
    for(const auto value : *B_H_data)
    {
        m_buffer->iu_data.B_H_ui_data.push_back({ start, value });

        start += time_step;
    }*/

    emit new_ui_data_available();
}



























