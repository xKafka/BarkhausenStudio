//
// Created by fkafka on 11. 3. 2021.
//

#include <current_measurement_device_worker.h>

CurrentMeasurementDeviceWorker::CurrentMeasurementDeviceWorker(QObject *parent)
    :   QObject{ parent },
        m_device{},
        m_is_open{ false },
        m_continuous_acquisition{ false },
        m_buffer{ },
        m_settings{ "current_sensor" }
{
    connect(this, &CurrentMeasurementDeviceWorker::read_next, this, &CurrentMeasurementDeviceWorker::read_chunk);
}

void CurrentMeasurementDeviceWorker::show_available_ports()
{

}

void CurrentMeasurementDeviceWorker::single_acquisition()
{
    constexpr const std::size_t data_size { 2 * 500 + 10 };

    m_device.send_message("DIG\n");

    m_device.wait_for_data_ready();

    m_device.send_message("WAV:DATA?\n");

    auto response = m_device.read();

    memmove(m_buffer, response, data_size);

    emit new_data_available(m_buffer, data_size, m_sample_rate);
}

void CurrentMeasurementDeviceWorker::continuous_acquisition_start()
{
    m_continuous_acquisition = true;

    read_chunk();
}

void CurrentMeasurementDeviceWorker::continuous_acquisition_stop()
{
    m_continuous_acquisition = false;

    m_device.send_message("STOP\n");
}

void CurrentMeasurementDeviceWorker::continuous_acquisition(const Command &cmd)
{
    //{ "current_sensor" } { "open" } { "port" }
    //{ "current_sensor" } { "acquisition" } { "preset" }
    //{ "current_sensor" } { "acquisition" } { "continuous" } { "start" }

    if(cmd.args.front() == "start")
    {
        continuous_acquisition_start();
    }
    else if(cmd.args.front() == "stop")
    {
        continuous_acquisition_stop();
    }
}

void CurrentMeasurementDeviceWorker::show_settings()
{
    emit echo("{ \"all\" } { \"current_sensor\" } { \"settings\" }" + m_settings.settings_to_args());
}

void CurrentMeasurementDeviceWorker::show_indentity()
{
    emit echo("{ \"main_window\" } { \"echo\" } { \"debug\" } { \"" + m_device.name() + "\" }");
}

void CurrentMeasurementDeviceWorker::open_port()
{
    //!add usbtmc_open function

    if(!m_is_open)
    {
        m_device.init_agilent(m_settings.settings().resource);

        if(!m_device.is_open())
        {
            emit echo("{ \"main_window\" } { \"echo\" } { \"debug\" } { \"port could not be opened\" }");
        }
        else
        {
            m_is_open = true;

            emit echo("{ \"main_window\" } { \"echo\" } { \"debug\" } { \"port opening successful\" }");
        }
    }
    else
            emit echo("{ \"main_window\" } { \"echo\" } { \"debug\" } { \"port is already opened\" }");
}

void CurrentMeasurementDeviceWorker::close_port()
{

}

void CurrentMeasurementDeviceWorker::read()
{
    emit echo("{ \"main_window\" } { \"echo\" } { \"debug\" } {\"" + std::string{ m_device.read() } + "\" }");
}

void CurrentMeasurementDeviceWorker::write(const Command &cmd)
{
    for(const auto &msg : cmd.args)
        m_device.send_message(msg);
}

void CurrentMeasurementDeviceWorker::change_settings(const Command &cmd)
{
    m_settings.change_setting(cmd);

    emit echo("{ \"main_window\" } { \"echo\" } { \"debug\" } { \"settings changed\" }");
}

void CurrentMeasurementDeviceWorker::read_chunk()
{
    QApplication::processEvents();

    const auto data_bits = 2 * m_points_per_chunk + 10;

    m_device.send_message("RUN\n");

    m_device.wait_for_data_ready();

    m_device.send_message("WAV:DATA?\n");

    auto response = m_device.read();

    memmove(m_buffer, response, data_bits);

    emit new_data_available(m_buffer, data_bits, m_sample_rate);

    if(m_continuous_acquisition)
            emit read_next();
}

void CurrentMeasurementDeviceWorker::reset()
{
    m_device.reset();
}

void CurrentMeasurementDeviceWorker::std_preset()
{
    reset();

    m_points_per_chunk = std::atoi(m_settings.settings().points_per_chunk.data());

    m_sample_rate = std::atoi(m_settings.settings().sample_rate.data());

    m_device.send_message("ROUT:ENAB 1, (@" + m_settings.settings().port + ")\n");

    m_device.send_message("ROUT:CHAN:RANG " + m_settings.settings().range + ",(@" + m_settings.settings().port + ")\n");

    m_device.send_message("ROUT:CHAN:POL " + m_settings.settings().polarity + ",(@" + m_settings.settings().port + ")\n");

    m_device.send_message("ACQ:SRAT " + m_settings.settings().sample_rate + '\n');

    m_device.send_message("WAV:POIN " + m_settings.settings().points_per_chunk + '\n');

    emit echo("{ \"main_window\" } { \"echo\" } { \"debug\" } { \"device is set using preconfigured settings\" }");
}

void CurrentMeasurementDeviceWorker::change_cmd(const Command &cmd)
{
    if(cmd.command_key == "settings")
    {
        change_settings(cmd);
    }
}

void CurrentMeasurementDeviceWorker::open_cmd(const Command &cmd)
{
    if(cmd.command_key == "port")
    {
        open_port();
    }
}

void CurrentMeasurementDeviceWorker::show_cmd(const Command &cmd)
{
    if(cmd.command_key == "identity")
    {
        show_indentity();
    }
    else if(cmd.command_key == "settings")
    {
        show_settings();
    }
    else if(cmd.command_key == "ports")
    {
        show_available_ports();
    }
}

void CurrentMeasurementDeviceWorker::close_cmd(const Command &cmd)
{
    if(cmd.command_key == "port")
    {
        close_port();
    }
}

void CurrentMeasurementDeviceWorker::read_cmd(const Command &cmd)
{
    if(cmd.command_key == "data")
    {
        read();
    }
    else if(cmd.command_key == "name")
    {
        show_indentity();
    }
}

void CurrentMeasurementDeviceWorker::write_cmd(const Command &cmd)
{
    if(cmd.command_key == "rst")
    {
        reset();
    }
}

void CurrentMeasurementDeviceWorker::acquisition_cmd(const Command &cmd)
{
    if(cmd.command_key == "continuous")
    {
        continuous_acquisition(cmd);
    }
    else if(cmd.command_key == "single")
    {
        single_acquisition();
    }
    else if(cmd.command_key == "preset")
    {
        std_preset();
    }
}
