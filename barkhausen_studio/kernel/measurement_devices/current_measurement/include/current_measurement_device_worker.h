//
// Created by fkafka on 11. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CURRENT_MEASUREMENT_DEVICE_WORKER_H
#define BARKHAUSEN_STUDIO_CURRENT_MEASUREMENT_DEVICE_WORKER_H

#include <memory>
#include <QObject>
#include <agilent_u2541a.h>
#include <command.h>
#include <settings.h>
#include <array>

constexpr auto buffer_max_len { 1 << 13 }; //2^13 -> 8192

class CurrentMeasurementDeviceWorker : public QObject
{
    Q_OBJECT

    AgilentU2541a m_device;

    SettingsIni m_settings;

    unsigned char m_buffer[buffer_max_len];

    bool m_is_open{};

    bool m_continuous_acquisition{};

    std::size_t m_points_per_chunk, m_sample_rate;

    void change_settings(const Command &cmd);

    void show_available_ports();

    void show_settings();

    void show_indentity();

    void open_port();

    void close_port();

    void write(const Command &cmd);

    void read();

    void read_chunk();

    void reset();

    void std_preset();

    void single_acquisition();

    void continuous_acquisition(const Command &cmd);

    void continuous_acquisition_start();

    void continuous_acquisition_stop();

public:
    explicit CurrentMeasurementDeviceWorker(QObject *parent = nullptr);

    ~CurrentMeasurementDeviceWorker() {}

public slots:
    void open_cmd(const Command &cmd);
    void change_cmd(const Command &cmd);
    void show_cmd(const Command &cmd);
    void close_cmd(const Command &cmd);
    void read_cmd(const Command &cmd);
    void write_cmd(const Command &cmd);
    void acquisition_cmd(const Command &cmd);

signals:
    void new_data_available(const unsigned char *, std::size_t, std::size_t);

    void read_next();

    void echo(const std::string &);
};


#endif //BARKHAUSEN_STUDIO_CURRENT_MEASUREMENT_DEVICE_WORKER_H
