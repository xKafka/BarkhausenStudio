//
// Created by fkafka on 15. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_DATA_CREATOR_H
#define BARKHAUSEN_STUDIO_DATA_CREATOR_H

#include <QObject>
#include <QThread>
#include <mem_types.h>
#include <data_creator_worker.h>
#include <data_buffer.h>
#include <settings_storage.h>
#include <measurement_device_holder.h>

class DataCreator : public QObject
{
    Q_OBJECT

    std::unique_ptr<DataCreatorWorker> m_worker;
    std::unique_ptr<QThread> m_thread;

public:
    explicit DataCreator(SharedData<SettingsStorage> &settings_storage, SharedData<DataBuffer> &buffer);

    ~DataCreator();

    inline auto *worker() const { return m_worker.get(); }

    void change_acquisition_time(double time);

    void change_acquisition_pause_time(double time);


public slots:
    void process_data();

    void start_meas_sequence();

    void stop_meas_sequence();

    void single_meas_sequence();
};

#endif //BARKHAUSEN_STUDIO_DATA_CREATOR_H
