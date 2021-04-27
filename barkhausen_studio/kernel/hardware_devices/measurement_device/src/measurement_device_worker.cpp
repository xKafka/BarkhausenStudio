//
// Created by fkafka on 25. 3. 2021.
//
#include <QApplication>

#include <measurement_device_worker.h>
#include <settings_names.h>

#include <QDebug>

MeasurementDeviceWorker::MeasurementDeviceWorker(QObject *parent)
        :   QObject{ parent },
            m_core{ std::make_unique<MeasurementDeviceCore>() },
            m_is_preset_done{ false }
{
    connect(this, &MeasurementDeviceWorker::read_next, this, &MeasurementDeviceWorker::read_chunk);
}

void MeasurementDeviceWorker::set_settings_storage_controller(SharedData<UsbtmcSettings> &settings_ref)
{
    if(!settings_ref.is_empty())
    {
        m_settings_ref = settings_ref;

        m_core->set_settings_storage_controller(settings_ref);
    }
    else
    {
        throw std::runtime_error("MeasurementDevice::set_settings_storage_controller settings pointer value error");
    }
}

void MeasurementDeviceWorker::single_acquisition()
{
    continuous_acquisition_stop();

    emit new_data_available(m_core->get_sample());
}

void MeasurementDeviceWorker::start()
{
    m_core->cont_acq_start();

    read_chunk();
}

void MeasurementDeviceWorker::stop()
{
    m_core->cont_acq_stop();
}

void MeasurementDeviceWorker::device_name()
{
    emit echo(m_core->get_device_name());
}

void MeasurementDeviceWorker::open_port()
{
    if(!m_core->is_open())
    {
        m_core->init();

        if(m_core->is_open())
        {
            emit echo("Port opened");
        }
    }
    else
    {
        emit echo("Could not open");
    }
}

void MeasurementDeviceWorker::close_port()
{

}

void MeasurementDeviceWorker::read()
{
    emit echo(m_core->read());
}

void MeasurementDeviceWorker::read_chunk()
{
    QApplication::processEvents();

    emit new_data_available(m_core->get_sample());

    if(m_core->is_cont_acq_running())
            emit read_next();
}

void MeasurementDeviceWorker::std_preset()
{
    m_core->reset();

    m_core->send_command("ROUT:ENAB 1, (@101,102,103,104)\n");

    qDebug() << "ROUT:ENAB 1, (@101,102,103,104)\n";

    m_core->send_command("ROUT:CHAN:RANG " + m_settings_ref->voltage_range + ",(@101,102,103,104)\n");

    qDebug() << std::string("ROUT:CHAN:RANG " + m_settings_ref->voltage_range + ",(@101,102,103,104)\n").data();

    m_core->send_command("ROUT:CHAN:POL " + m_settings_ref->polarity + ",(@101,102,103,104)\n");

    qDebug() << std::string("ROUT:CHAN:POL " + m_settings_ref->polarity + ",(@101,102,103,104)\n").data();

    m_core->send_command("ACQ:SRAT " + m_settings_ref->sample_rate + '\n');

    qDebug() << std::string("ACQ:SRAT " + m_settings_ref->sample_rate + '\n').data();

    m_core->send_command("WAV:POIN " + m_settings_ref->points_per_chunk + '\n');

    qDebug() << std::string("WAV:POIN " + m_settings_ref->points_per_chunk + '\n').data();

    m_is_preset_done = true;

    emit echo("device is set using preconfigured settings");

}

void MeasurementDeviceWorker::open()
{
    open_port();
}

void MeasurementDeviceWorker::continuous_acquisition_start()
{
    if(!m_is_preset_done)
        std_preset();

    start();
}

void MeasurementDeviceWorker::continuous_acquisition_stop()
{
    stop();
}

void MeasurementDeviceWorker::single_shot()
{
    if(!m_is_preset_done)
        std_preset();

    single_acquisition();
}