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

    SharedData<DeviceFinder> m_device_finder;

    SharedData<DataCreator> m_data_creator;

public:
    Core();

    auto &data_creator_unsafe() { return m_data_creator; }

    auto &device_finder_unsafe() { return m_device_finder; }

signals:
    void new_ui_data_available(const DataBuffer &);
};

#endif //BARKHAUSEN_STUDIO_DATACORE_H
