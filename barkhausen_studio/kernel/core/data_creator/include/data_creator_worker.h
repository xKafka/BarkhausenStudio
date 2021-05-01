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

class DataCreatorWorker : public QObject
{
    Q_OBJECT

    ReadWriteRef<DataBuffer> m_buffer;

    ReadOnlyRef<SettingsStorage> m_settings;

    std::unique_ptr<MeasurementDeviceHolder> m_device;

public:
    explicit DataCreatorWorker(SharedData<SettingsStorage> &settings_storage, SharedData<DataBuffer> &buffer);

    [[nodiscard]] auto &buffer() const { return m_buffer; }

public slots:
    void process_data();

signals:
    void new_ui_data_available();
};

#endif //BARKHAUSEN_STUDIO_DATA_CREATOR_WORKER_H
