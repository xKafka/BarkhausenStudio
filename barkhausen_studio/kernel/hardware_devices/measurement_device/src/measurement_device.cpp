//
// Created by fkafka on 25. 3. 2021.
//

#include <measurement_device.h>

MeasurementDevice::MeasurementDevice(SharedData<UsbtmcSettings> &usbtmc_settings)
        : m_thread{ std::make_unique<QThread>(this) },
          m_worker{ std::make_unique<MeasurementDeviceWorker>(usbtmc_settings) }
{
    m_worker->moveToThread(m_thread.get());

    connect(m_thread.get(), &QThread::finished, m_worker.get(), &QObject::deleteLater);

    m_thread->start();
}

MeasurementDevice::~MeasurementDevice()
{
    m_thread->wait();
    m_thread->quit();
}

bool MeasurementDevice::is_opened() const
{
    //to do
    return m_is_opened;
}

void MeasurementDevice::open()
{
    m_is_opened = true;

    QMetaObject::invokeMethod(m_worker.get(), "open", Qt::AutoConnection);
}

void MeasurementDevice::continuous_acquisition_start()
{
    QMetaObject::invokeMethod(m_worker.get(), "continuous_acquisition_start", Qt::AutoConnection);
}

void MeasurementDevice::continuous_acquisition_stop()
{
    QMetaObject::invokeMethod(m_worker.get(), "continuous_acquisition_stop", Qt::AutoConnection);
}

void MeasurementDevice::set_ref_voltage()
{
    QMetaObject::invokeMethod(m_worker.get(), "set_ref_voltage", Qt::AutoConnection);
}

void MeasurementDevice::single_shot()
{
    QMetaObject::invokeMethod(m_worker.get(), "single_shot", Qt::AutoConnection);
}

void MeasurementDevice::device_name()
{
    QMetaObject::invokeMethod(m_worker.get(), "device_name", Qt::AutoConnection);
}

