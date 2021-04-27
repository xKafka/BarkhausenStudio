//
// Created by fkafka on 30. 3. 2021.
//

#include <measurement_device_holder.h>
#include <data_parser.h>

MeasurementDeviceHolder::MeasurementDeviceHolder(SharedData<DataBuffer> &buffer_ref)
        :   m_measurement_device{ }
{
    if(!buffer_ref.is_empty())
    {
        m_buffer_ref = buffer_ref;
    }
    else
    {
        throw std::runtime_error("MeasurementDeviceHolder::MeasurementDeviceHolder buffer pointer value error");
    }

    connect(m_measurement_device.worker(), &MeasurementDeviceWorker::new_data_available, this, [&](const unsigned char *data)
    {
        m_buffer_ref->measurement_data.raw_data = data;

        m_buffer_ref->measurement_data.data = DataParser::parse_data(data);

        emit new_data_available();
    });
}

MeasurementDeviceHolder::~MeasurementDeviceHolder() noexcept
{
}

void MeasurementDeviceHolder::set_settings_storage_controller(SharedData<SettingsStorage> &settings_ref)
{
    if(!settings_ref.is_empty())
    {
        m_settings_storage_ref = settings_ref;

        m_measurement_device.set_settings_storage_controller(settings_ref->usbtmc_settings);

        setup_port_indexes();
    }
    else
    {
        throw std::runtime_error("MeasurementDeviceHolder::set_settings_storage_controller settings pointer value error");
    }
}

void MeasurementDeviceHolder::setup_port_indexes()
{
    auto port_to_int = [](std::string_view str)
    {
        return std::atoi(str.data()) - 100;
    };

    const auto &settings = m_settings_storage_ref->usbtmc_settings;

    m_buffer_ref->measurement_data.indexes.barkhausen_noise = port_to_int(settings->barkhausen_port);
    m_buffer_ref->measurement_data.indexes.current = port_to_int(settings->current_port);
    m_buffer_ref->measurement_data.indexes.gauss = port_to_int(settings->gauss_port);
    m_buffer_ref->measurement_data.indexes.induced_voltage = port_to_int(settings->induced_voltage_port);
}

void MeasurementDeviceHolder::start_continuous_acq()
{
    if(!m_measurement_device.is_opened())
    {
        m_measurement_device.open();
    }

    m_measurement_device.continuous_acquisition_start();
}

void MeasurementDeviceHolder::stop_continuous_acq()
{
    m_measurement_device.continuous_acquisition_stop();
}

void MeasurementDeviceHolder::single_shot()
{
    if(!m_measurement_device.is_opened())
    {
        m_measurement_device.open();
    }

    m_measurement_device.single_shot();
}
