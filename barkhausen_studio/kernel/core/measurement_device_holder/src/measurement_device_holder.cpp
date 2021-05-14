//
// Created by fkafka on 30. 3. 2021.
//

#include <measurement_device_holder.h>
#include <data_parser.h>

MeasurementDeviceHolder::MeasurementDeviceHolder(SharedData<SettingsStorage> &settings_storage, SharedData<DataBuffer> &buffer_ref)
        :   m_settings_storage_ref{ settings_storage },
            m_buffer_ref{ buffer_ref },
            m_measurement_device{ settings_storage->meas_dev_settings }
{
    connect(m_measurement_device.worker(), &MeasurementDeviceWorker::new_data_available, this, [&](const unsigned char *data)
    {
        m_buffer_ref->measurement_data.raw_data = data;

        m_buffer_ref->measurement_data.data = DataParser::parse_data(data);

        emit new_data_available();
    });

    connect(m_measurement_device.worker(), &MeasurementDeviceWorker::opened, this, [&](){ emit opened(); });

    connect(m_settings_storage_ref->meas_dev_settings.get(), &MeasurementDeviceSettings::changed, this, &MeasurementDeviceHolder::reload_settings);

    //connect(m_settings_storage_ref->usbtmc_settings.get(), &UsbtmcSettings::voltage, this, &MeasurementDeviceHolder::set_ref_voltage);

    setup_port_indexes();
}

MeasurementDeviceHolder::~MeasurementDeviceHolder() noexcept
{
}


void MeasurementDeviceHolder::set_ref_voltage(double val)
{
    m_measurement_device.set_ref_voltage(val);
}

void MeasurementDeviceHolder::reload_settings()
{
    setup_port_indexes();
}

void MeasurementDeviceHolder::setup_port_indexes()
{
    const auto b_port = settings()->get<int>(MeasDeviceSetting::BarkhausenPort) - 100;
    const auto c_port = settings()->get<int>(MeasDeviceSetting::CurrentPort) - 100;
    const auto g_port = settings()->get<int>(MeasDeviceSetting::GaussPort) - 100;
    const auto i_port = settings()->get<int>(MeasDeviceSetting::InducedVoltagePort) - 100;

    const auto &settings = m_settings_storage_ref->meas_dev_settings;

    m_buffer_ref->measurement_data.indexes.barkhausen_noise = b_port;
    m_buffer_ref->measurement_data.indexes.current = c_port;
    m_buffer_ref->measurement_data.indexes.gauss = g_port;
    m_buffer_ref->measurement_data.indexes.induced_voltage = i_port;
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
