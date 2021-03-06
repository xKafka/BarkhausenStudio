//
// Created by fkafka on 15. 4. 2021.
//

#include "../include/data_creator.h"

DataCreator::DataCreator(SharedData<SettingsStorage> &settings_storage, SharedData<DataBuffer> &buffer)
    :   m_thread{ std::make_unique<QThread>(this) },
        m_worker{ std::make_unique<DataCreatorWorker>(settings_storage, buffer) }
{
    m_worker->moveToThread(m_thread.get());

    connect(m_thread.get(), &QThread::finished, m_worker.get(), &QObject::deleteLater);

    m_thread->start();
}

DataCreator::~DataCreator()
{
    m_thread->wait();
    m_thread->quit();
}

void DataCreator::change_acquisition_time(double time)
{
    QMetaObject::invokeMethod(m_worker.get(), "change_acquisition_time",Qt::AutoConnection, Q_ARG(double, time));
}

void DataCreator::change_acquisition_pause_time(double time)
{
    QMetaObject::invokeMethod(m_worker.get(), "change_acquisition_pause_time", Qt::AutoConnection, Q_ARG(double, time));
}

void DataCreator::process_data()
{
    QMetaObject::invokeMethod(m_worker.get(), "process_data", Qt::AutoConnection);
}

void DataCreator::start_meas_sequence()
{
    QMetaObject::invokeMethod(m_worker.get(), "start_meas_sequence",Qt::AutoConnection);
}

void DataCreator::stop_meas_sequence()
{
    QMetaObject::invokeMethod(m_worker.get(), "stop_meas_sequence", Qt::AutoConnection);
}

void DataCreator::single_meas_sequence()
{
    QMetaObject::invokeMethod(m_worker.get(), "single_meas_sequence", Qt::AutoConnection);
}
