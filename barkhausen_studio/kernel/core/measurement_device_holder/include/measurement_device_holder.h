//
// Created by fkafka on 30. 3. 2021.
//

#pragma once

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_HOLDER_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_HOLDER_H

#include <QObject>
#include <mem_types.h>
#include <measurement_device.h>
#include <settings_storage.h>
#include <usbtmc_device_finder_wrapper.h>
#include <data_buffer.h>

class MeasurementDeviceHolder: public QObject
{
    Q_OBJECT

    ReadWriteRef<DataBuffer> m_buffer_ref;

    ReadOnlyRef<SettingsStorage> m_settings_storage_ref;

    MeasurementDevice m_measurement_device;

    void setup_port_indexes();

public:
    explicit MeasurementDeviceHolder(SharedData<DataBuffer> &buffer_ref);
    ~MeasurementDeviceHolder();

    void set_settings_storage_controller(SharedData<SettingsStorage> &settings_ref);

    void start_continuous_acq();

    void stop_continuous_acq();

    void single_shot();

    auto &settings() { return m_settings_storage_ref->usbtmc_settings; }

signals:
    void new_data_available();
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_HOLDER_H
