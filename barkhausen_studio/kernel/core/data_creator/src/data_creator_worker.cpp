//
// Created by fkafka on 15. 4. 2021.
//

#include <data_creator_worker.h>
#include <utils.h>
#include <QDebug>

DataCreatorWorker::DataCreatorWorker(SharedData<SettingsStorage> &settings_storage, SharedData<DataBuffer> &buffer)
    :   m_buffer{ buffer },
        m_settings{ settings_storage },
        m_device{ std::make_unique<MeasurementDeviceHolder>(settings_storage, buffer) }
{
    connect(m_device.get(), &MeasurementDeviceHolder::new_data_available, this, &DataCreatorWorker::process_data);
}

void DataCreatorWorker::process_data()
{
    using namespace Utility::Cast;

    auto &sett = m_settings->usbtmc_settings;

    const auto sample_rate = sett->get<double>(UsbtmcSettingName::SampleRate);

    const auto &bark_data = m_buffer->measurement_data.barkhausen_data();

    const auto &B_H_data = m_buffer->measurement_data.current_data();

    const auto time_step = static_cast<double>(bark_data.size()) / sample_rate;

    double start = 0.0;

    for(const auto value : bark_data)
    {
        m_buffer->ui_data.barkhausen_ui_data.push_back({ start, value });

        start += time_step;
    }

    start = 0.0;
/*
    for(const auto value : *B_H_data)
    {
        m_buffer->ui_data.B_H_ui_data.push_back({ start, value });

        start += time_step;
    }*/

    emit new_ui_data_available();
}



























