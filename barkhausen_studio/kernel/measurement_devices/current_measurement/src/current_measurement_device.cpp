//
// Created by fkafka on 11. 3. 2021.
//

#include <current_measurement_device.h>
#include <QMetaObject>

CurrentMeasurementDevice::CurrentMeasurementDevice()
    : m_thread{ std::make_unique<QThread>(this) },
      m_worker{ std::make_unique<CurrentMeasurementDeviceWorker>() }
{
    m_worker->moveToThread(m_thread.get());

    connect(m_thread.get(), &QThread::finished, m_worker.get(), &QObject::deleteLater);

    m_thread->start();
}

CurrentMeasurementDevice::~CurrentMeasurementDevice()
{
    m_thread->wait();
    m_thread->quit();
}

void CurrentMeasurementDevice::do_magic(const Command &cmd)
{
    if(cmd.key == "read")
    {
        read_cmd(cmd);
    }
    else if(cmd.key == "change")
    {
        change_cmd(cmd);
    }
    else if(cmd.key == "show")
    {
        show_cmd(cmd);
    }
    else if(cmd.key == "open")
    {
        open_cmd(cmd);
    }
    else if(cmd.key == "write")
    {
        write_cmd(cmd);
    }
    else if(cmd.key == "close")
    {
        close_cmd(cmd);
    }
    else if(cmd.key == "acquisition")
    {
        acquisition_cmd(cmd);
    }
}

void CurrentMeasurementDevice::open_cmd(const Command &cmd)
{
    QMetaObject::invokeMethod(m_worker.get(), "open_cmd", Qt::AutoConnection, Q_ARG(const Command &, cmd));
}

void CurrentMeasurementDevice::change_cmd(const Command &cmd)
{
    QMetaObject::invokeMethod(m_worker.get(), "change_cmd", Qt::AutoConnection, Q_ARG(const Command &, cmd));
}

void CurrentMeasurementDevice::show_cmd(const Command &cmd)
{
    QMetaObject::invokeMethod(m_worker.get(), "show_cmd", Qt::AutoConnection, Q_ARG(const Command &, cmd));
}

void CurrentMeasurementDevice::close_cmd(const Command &cmd)
{
    QMetaObject::invokeMethod(m_worker.get(), "close_cmd", Qt::AutoConnection, Q_ARG(const Command &, cmd));
}

void CurrentMeasurementDevice::read_cmd(const Command &cmd)
{
    QMetaObject::invokeMethod(m_worker.get(), "read_cmd", Qt::AutoConnection, Q_ARG(const Command &, cmd));
}

void CurrentMeasurementDevice::write_cmd(const Command &cmd)
{
    QMetaObject::invokeMethod(m_worker.get(), "write_cmd", Qt::AutoConnection, Q_ARG(const Command &, cmd));
}

void CurrentMeasurementDevice::acquisition_cmd(const Command &cmd)
{
    QMetaObject::invokeMethod(m_worker.get(), "acquisition_cmd", Qt::AutoConnection, Q_ARG(const Command &, cmd));
}
