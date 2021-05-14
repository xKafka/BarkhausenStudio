//
// Created by fkafka on 25. 3. 2021.
//
#include <QApplication>

#include <measurement_device_worker.h>
#include <settings_names.h>
#include <QDebug>

MeasurementDeviceWorker::MeasurementDeviceWorker(SharedData<MeasurementDeviceSettings> &usbtmc_settings, QObject *parent)
        :   QObject{ parent },
            m_settings_ref{ usbtmc_settings },
            m_core{ std::make_unique<MeasurementDeviceCore>(usbtmc_settings) },
            m_is_preset_done{ false }
{
    connect(this, &MeasurementDeviceWorker::read_next, this, &MeasurementDeviceWorker::read_chunk);
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
}

void MeasurementDeviceWorker::set_ref_voltage(const double val)
{
    m_core->set_ref_voltage(val);
}

void MeasurementDeviceWorker::open_port()
{
    if(!m_core->is_open())
    {
        m_core->init();

        if(m_core->is_open())
        {
            emit opened();
        }
    }
}

void MeasurementDeviceWorker::close_port()
{

}

void MeasurementDeviceWorker::read()
{

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
    if(!m_core->is_open())
    {
        return;
    }

    m_core->reset();

    m_core->send_command("ROUT:ENAB 1, (@101,102,103,104)\n");

    qDebug() << "ROUT:ENAB 1, (@101,102,103,104)\n";

    const auto &voltage_range = m_settings_ref->get(MeasDeviceSetting::VoltageRange);

    const std::string polarity = m_settings_ref->get(MeasDeviceSetting::Polarity);

    const std::string sample_rate = m_settings_ref->get(MeasDeviceSetting::SampleRate);

    const std::string points_per_chunk = m_settings_ref->get(MeasDeviceSetting::PointsPerChunk);

    m_core->send_command("ROUT:CHAN:RANG " + voltage_range + ",(@101,102,103,104)\n");

    qDebug() << std::string("ROUT:CHAN:RANG " + voltage_range + ",(@101,102,103,104)\n").data();

    m_core->send_command("ROUT:CHAN:POL " + polarity + ",(@101,102,103,104)\n");

    qDebug() << std::string("ROUT:CHAN:POL " + polarity + ",(@101,102,103,104)\n").data();

    m_core->send_command("ACQ:SRAT " + sample_rate + '\n');

    qDebug() << std::string("ACQ:SRAT " + sample_rate + '\n').data();

    m_core->send_command("WAV:POIN " + points_per_chunk + '\n');

    qDebug() << std::string("WAV:POIN " + points_per_chunk + '\n').data();

    m_is_preset_done = true;
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
    if(m_core->is_cont_acq_running())
        stop();
}

void MeasurementDeviceWorker::single_shot()
{
    if(!m_is_preset_done)
        std_preset();

    single_acquisition();
}