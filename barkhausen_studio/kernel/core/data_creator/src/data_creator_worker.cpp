//
// Created by fkafka on 15. 4. 2021.
//

#include <data_creator_worker.h>
#include <utils.h>
#include <QDebug>

DataCreatorWorker::DataCreatorWorker(SharedData<SettingsStorage> &settings_storage, SharedData<DataBuffer> &buffer)
    :   m_buffer{ buffer },
        m_settings{ settings_storage },
        m_device{ settings_storage, buffer },
        m_source{ settings_storage },
        m_acq_settings{ },
        m_data_timer{ 0.0 }
{
    connect(m_device.get(), &MeasurementDeviceHolder::new_data_available, this, &DataCreatorWorker::process_data);

    connect(m_settings->usbtmc_settings.get(), &UsbtmcSettings::changed, this, [&](){ load_settings(); });

    connect(m_settings->measurement_settings.get(), &MeasurementSettings::changed, this, [&](){ load_settings(); });

    load_settings();
}

void DataCreatorWorker::load_settings()
{
    m_device->stop_continuous_acq();
    m_source->deactivate_output();

    m_acq_settings.max_points_per_chunk = m_settings->usbtmc_settings->get<std::size_t>(UsbtmcSettingName::MaxPointsPerChunk);
    m_acq_settings.sample_rate = m_settings->usbtmc_settings->get<double>(UsbtmcSettingName::SampleRate);
    m_acq_settings.single_acq_time = (1.0 / m_acq_settings.sample_rate) * static_cast<double>(m_acq_settings.max_points_per_chunk);
    m_acq_settings.time_step = 1.0 / m_acq_settings.sample_rate;

    calculate_number_of_measure_data_needed();
}

void DataCreatorWorker::init_sequence()
{
    load_settings();
}

void DataCreatorWorker::calculate_number_of_measure_data_needed()
{
    m_acq_settings.time_needed = m_settings->measurement_settings->get<double>(MeasurementSetting::AcquisitionTime);

    m_acq_settings.data_chunks_needed = std::ceil(m_acq_settings.time_needed / m_acq_settings.single_acq_time);
}

void DataCreatorWorker::start_meas_sequence()
{
    init_sequence();

    m_source->active_output();

    m_device->start_continuous_acq();

    m_auto_clean = true;
}

void DataCreatorWorker::stop_meas_sequence()
{
    m_auto_clean = false;

    m_device->stop_continuous_acq();

    m_source->deactivate_output();
}

void DataCreatorWorker::single_meas_sequence()
{
    m_source->active_output();

    m_device->single_shot();
}

void DataCreatorWorker::check_buffer_state()
{
    if(m_buffer->ui_data.barkhausen_ui_data_size == m_acq_settings.data_chunks_needed)
    {
        m_buffer->ui_data.barkhausen_ui_data_size = 0;

        m_data_timer = 0.0;

        emit new_ui_data_available();
    }

    ++m_buffer->ui_data.barkhausen_ui_data_size;
}

void DataCreatorWorker::change_acquisition_time(double time)
{
    m_settings->measurement_settings->change(MeasurementSetting::AcquisitionTime, time);
}

void DataCreatorWorker::change_acquisition_pause_time(double time)
{
    m_settings->measurement_settings->change(MeasurementSetting::AcquisitionPause, time);
}

void DataCreatorWorker::process_data()
{
    using namespace Utility::Cast;

    const auto &bark_data = m_buffer->measurement_data.barkhausen_data();

    const auto &B_H_data = m_buffer->measurement_data.current_data();

    for(const auto value : bark_data)
    {
        m_buffer->ui_data.barkhausen_ui_data.push_back({ m_data_timer, value });

        m_data_timer += m_acq_settings.time_step;

        if(m_data_timer > m_acq_settings.time_needed)
        {
            break;
        }
    }
    /*
    for(const auto value : *B_H_data)
    {
        m_buffer->ui_data.B_H_ui_data.push_back({ start, value });

        start += time_step;
    }*/

    check_buffer_state();
}



























