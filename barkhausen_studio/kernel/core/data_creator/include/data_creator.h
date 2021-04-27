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
    DataCreator();

    ~DataCreator();

    inline auto *worker() const { return m_worker.get(); }

    void set_settings_storage_controller(SharedData<SettingsStorage> &settings);

    void start_continuous_acq();

    void stop_continuous_acq();

    void single_shot_acq();

};

#endif //BARKHAUSEN_STUDIO_DATA_CREATOR_H
