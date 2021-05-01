//
// Created by fkafka on 15. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_DATACORE_H
#define BARKHAUSEN_STUDIO_DATACORE_H

#include <QObject>
#include <data_creator.h>
#include <data_buffer.h>
#include <measurement_device_holder.h>
#include <device_finder.h>
#include <mem_types.h>

class Core : public QObject
{
    Q_OBJECT

    SharedData<SettingsStorage> m_settings_storage;

    SharedData<DataBuffer> m_buffer;

    SharedData<DeviceFinder> m_device_finder;

    SharedData<MeasurementDeviceHolder> m_device;

    SharedData<DataCreator> m_data_creator;

public:
    explicit Core();

    auto &device_finder_unsafe() { return m_device_finder; }

    auto &buffer_unsafe() { return m_buffer; }

    auto &mes_device_unsafe() { return m_device; }

    auto &data_creator_unsafe() { return m_data_creator; }

    auto &settings_storage_unsafe() { return m_settings_storage; }

public slots:
    void start_meas_sequence();

    void stop_meas_sequence();

    void single_meas_sequence();

signals:
    void new_ui_data_available(const DataBuffer &);
};

#endif //BARKHAUSEN_STUDIO_DATACORE_H
