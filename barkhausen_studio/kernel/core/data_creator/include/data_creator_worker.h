//
// Created by fkafka on 15. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_DATA_CREATOR_WORKER_H
#define BARKHAUSEN_STUDIO_DATA_CREATOR_WORKER_H

#include <QObject>
#include <ui_settings.h>
#include <data_buffer.h>
#include <measurement_device_holder.h>
#include <settings_storage.h>
#include <mem_types.h>
#include <signal_source_holder.h>

#include <chrono>

class DataCreatorWorker : public QObject
{
    Q_OBJECT

    struct AcqSettings
    {
        double single_acq_time, sample_rate, time_needed, time_step;
        std::size_t max_points_per_chunk, data_chunks_needed;
    };

    bool m_auto_clean;

    AcqSettings m_acq_settings;

    ReadWriteRef<DataBuffer> m_buffer;

    ReadOnlyRef<SettingsStorage> m_settings;

    SharedData<MeasurementDeviceHolder> m_device;

    SharedData<SignalSourceHolder> m_source;

    void check_buffer_state();

    double m_data_timer;

    void calculate_number_of_measure_data_needed();

    void init_sequence();

    void load_settings();

public:
    explicit DataCreatorWorker(SharedData<SettingsStorage> &settings_storage, SharedData<DataBuffer> &buffer);

    [[nodiscard]] auto &buffer_unsafe() { return m_buffer; }

    auto &source_unsafe() { return m_source; }

    auto &mes_device_unsafe() { return m_device; }

public slots:
    void process_data();

    void change_acquisition_time(double time);

    void change_acquisition_pause_time(double time);

    void start_meas_sequence();

    void stop_meas_sequence();

    void single_meas_sequence();

signals:
    void new_ui_data_available();

    void force_stop();
};

#endif //BARKHAUSEN_STUDIO_DATA_CREATOR_WORKER_H
