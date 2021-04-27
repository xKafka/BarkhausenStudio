//
// Created by fkafka on 15. 4. 2021.
//

#include "../include/data_creator.h"

DataCreator::DataCreator()
    :   m_thread{ std::make_unique<QThread>(this) },
        m_worker{ std::make_unique<DataCreatorWorker>() }
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

void DataCreator::set_settings_storage_controller(SharedData<SettingsStorage> &settings)
{
    if(!settings.is_empty())
    {
        worker()->set_settings_storage_controller(settings);
    }
    else
    {
        throw std::runtime_error("DataCreator::set_settings_storage_controller pointer value error");
    }
}

void DataCreator::start_continuous_acq()
{
    QMetaObject::invokeMethod(m_worker.get(), "start_continuous_acq", Qt::AutoConnection);
}

void DataCreator::stop_continuous_acq()
{
    QMetaObject::invokeMethod(m_worker.get(), "stop_continuous_acq", Qt::AutoConnection);
}

void DataCreator::single_shot_acq()
{
    QMetaObject::invokeMethod(m_worker.get(), "single_shot_acq", Qt::AutoConnection);

}


