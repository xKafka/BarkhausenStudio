//
// Created by fkafka on 25. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_WORKER_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_WORKER_H

#include <memory>
#include <QObject>
#include <measurement_device_core.h>
#include <array>
#include <usbtmc_settings.h>
#include <mem_types.h>

class MeasurementDeviceWorker : public QObject
{
    Q_OBJECT

    std::unique_ptr<MeasurementDeviceCore> m_core;

    ReadOnlyRef<UsbtmcSettings> m_settings_ref;

    bool m_is_preset_done;

    void open_port();

    void close_port();

    void read();

    void read_chunk();

    void std_preset();

    void single_acquisition();

    void start();

    void stop();

public:
    explicit MeasurementDeviceWorker(SharedData<UsbtmcSettings> &usbtmc_settings, QObject *parent = nullptr);

    ~MeasurementDeviceWorker() {}

public slots:
    void open();

    void continuous_acquisition_start();

    void continuous_acquisition_stop();

    void single_shot();

    void device_name();

    void set_ref_voltage();

signals:
    void new_data_available(const unsigned char *);

    void read_next();

    void echo(const std::string &);
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_WORKER_H
