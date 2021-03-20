//
// Created by fkafka on 11. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CURRENT_MEASUREMENT_DEVICE_H
#define BARKHAUSEN_STUDIO_CURRENT_MEASUREMENT_DEVICE_H

#include <QObject>
#include <QThread>
#include <current_measurement_device_worker.h>

class CurrentMeasurementDevice : public QObject
{
    Q_OBJECT

    std::string_view m_name{ "current_sensor" };

    std::unique_ptr<QThread> m_thread;
    std::unique_ptr<CurrentMeasurementDeviceWorker> m_worker;

public:
    CurrentMeasurementDevice();
    ~CurrentMeasurementDevice() noexcept override;

    [[nodiscard]] inline auto name() const { return m_name; }

    [[nodiscard]] inline auto *worker() const { return m_worker.get(); }

    void open_cmd(const Command &cmd);

    void change_cmd(const Command &cmd);

    void show_cmd(const Command &cmd);

    void close_cmd(const Command &cmd);

    void read_cmd(const Command &cmd);

    void write_cmd(const Command &cmd);

    void acquisition_cmd(const Command &cmd);

    void do_magic(const Command &cmd);

};

#endif //BARKHAUSEN_STUDIO_CURRENT_MEASUREMENT_DEVICE_H
