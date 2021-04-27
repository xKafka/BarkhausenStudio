//
// Created by fkafka on 25. 3. 2021.
//
#pragma once

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_H

#include <QObject>
#include <QThread>
#include <measurement_device_worker.h>
#include <mem_types.h>

class MeasurementDevice : public QObject
{
    Q_OBJECT

    std::unique_ptr<QThread> m_thread;
    std::unique_ptr<MeasurementDeviceWorker> m_worker;

    bool m_is_opened{ false };

public:
    explicit MeasurementDevice();

    ~MeasurementDevice() noexcept override;

    void set_settings_storage_controller(SharedData<UsbtmcSettings> &settings_ref);

    [[nodiscard]] inline auto worker() const { return m_worker.get(); }

    void open();

    void continuous_acquisition_start();

    void continuous_acquisition_stop();

    void single_shot();

    void device_name();

    bool is_opened() const;
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_H
