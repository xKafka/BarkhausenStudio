//
// Created by fkafka on 20. 4. 2021.
//

#include <meas_device_settings.h>
#include <ui_meas_device_settings.h>
#include <measurement_device_settings.h>
#include <QMessageBox>
#include <QDebug>
#include <sstream>
#include <utils.h>

MeasDeviceSettings::MeasDeviceSettings(Core *core, QWidget *parent)
        :   QWidget(parent),
            m_dev_finder_ref{ core->device_finder_unsafe() },
            m_ui{ std::make_unique<Ui::MeasDeviceSettings>() },
            m_device{ core->data_creator_unsafe()->worker()->mes_device_unsafe() },
            m_is_voltage_settings_active{ false }
{
    m_ui->setupUi(this);

    setup_ranges();

    setup_shown();

    connect(m_device->settings().get(), SIGNAL(changed()), this, SLOT(update_shown()));

    connect(m_dev_finder_ref.get(), &DeviceFinder::usb_reloaded, this, [&]()
    {
        show_available_devices();

        select_resource();
    });

    connect(m_ui->pushButton_back, &QPushButton::clicked, this, [&]()
    {
        emit back_clicked();

        hide();
    });

    connect(m_ui->pushButton_save, &QPushButton::clicked, this, [&]()
    {
        save_settings();
    });

    connect(m_ui->horizontalSlider_points_per_chunk, &QSlider::valueChanged, this, [&](const int val)
    {
        m_ui->label_points_per_chunk_vals->setText(QString::number(per_to_absolute(val, m_limits.points_per_chunk)));
    });

    connect(m_ui->horizontalSlider_sample_rate, &QSlider::valueChanged, this, [&](const int val)
    {
        m_ui->label_sample_rate_vals->setText(QString::number(per_to_absolute(val, m_limits.sample_rate)));
    });

    connect(m_ui->horizontalSlider_voltage_range, &QSlider::valueChanged, this, [&](const int val)
    {
        m_ui->label_voltage_range_vals->setText(QString::number(per_to_absolute(val, m_limits.voltage_range)));
    });

    connect(m_ui->dial_tuning, &QDial::valueChanged, this, [&](const int val)
    {
        tune_val(val);
    });

    connect(m_ui->dial_fine_tuning, &QDial::valueChanged, this, [&](const int val)
    {
        fine_tune_val(val);
    });

    connect(m_ui->pushButton_active_output, &QPushButton::clicked, this, [&]()
    {
        if(m_is_voltage_settings_active)
        {
            m_is_voltage_settings_active = false;

            m_ui->pushButton_active_output->setText("Activate Output");
        }
        else
        {
            set_voltage();

            m_is_voltage_settings_active = true;

            m_ui->pushButton_active_output->setText("Deactivate Output");
        }
    });
}

void MeasDeviceSettings::set_voltage()
{
    m_device->set_ref_voltage(m_ui->lcdNumber->value());
}

void MeasDeviceSettings::setup_shown()
{
    update_shown();

    show_available_devices();

    select_resource();
}

void MeasDeviceSettings::setup_ranges()
{
    constexpr auto slider_min { 0 };
    constexpr auto slider_max { 100 };

    m_ui->horizontalSlider_points_per_chunk->setRange(slider_min, slider_max);
    m_ui->horizontalSlider_sample_rate->setRange(slider_min, slider_max);
    m_ui->horizontalSlider_voltage_range->setRange(slider_min, slider_max);
}

void change_index(QComboBox *box, std::string_view to_find)
{
    box->setCurrentIndex(box->findText(to_find.data()));
}

void MeasDeviceSettings::fine_tune_val(int dial_val)
{
    double lcd_val = m_ui->lcdNumber->value();

    using namespace Utility;

    if(dial_val > m_tune.fine_val)
    {
        if(Comparator::less_than(lcd_val, m_limits.voltage_range - m_tune.fine_step))
        {
            lcd_val += m_tune.fine_step;
        }
    }
    else if(dial_val < m_tune.fine_val)
    {
        if(Comparator::greater_than(lcd_val, m_tune.fine_step))
        {
            lcd_val -= m_tune.fine_step;
        }
    }

    m_tune.fine_val = dial_val;

    m_ui->lcdNumber->display(lcd_val);

    if(m_is_voltage_settings_active)
    {
        set_voltage();
    }
}

void MeasDeviceSettings::tune_val(int dial_val)
{
    double lcd_val = m_ui->lcdNumber->value();

    using namespace Utility;

    if(dial_val > m_tune.standard_val)
    {
        if(Comparator::less_than(lcd_val, m_limits.voltage_range - m_tune.standard_step))
        {
            lcd_val += m_tune.standard_step;
        }
    }
    else if(dial_val < m_tune.standard_val)
    {
        if(Comparator::greater_than(lcd_val, m_tune.standard_step))
        {
            lcd_val -= m_tune.standard_step;
        }
    }

    m_tune.standard_val = dial_val;

    m_ui->lcdNumber->display(lcd_val);

    if(m_is_voltage_settings_active)
    {
        set_voltage();
    }
}

void MeasDeviceSettings::select_resource()
{
    for(const auto &dev : m_dev_finder_ref->usbtmc_devs().data())
    {
        if(dev.second.resource == m_device->settings()->get(MeasDeviceSetting::Resource))
        {
            change_index(m_ui->comboBox_resource_mes, dev.first);

            change_index(m_ui->comboBox_resource_source, dev.first);
        }
    }
}

void MeasDeviceSettings::show_available_devices()
{
    const auto &devs = m_dev_finder_ref->usbtmc_devs();

    m_ui->comboBox_resource_mes->clear();
    m_ui->comboBox_resource_source->clear();

    if(devs.are_available())
    {
        for(const auto &dev : devs.data())
        {
            m_ui->comboBox_resource_mes->addItem(dev.first.data());

            m_ui->comboBox_resource_source->addItem(dev.first.data());
        }
    }
}

void MeasDeviceSettings::update_shown()
{
    using namespace Utility::Cast;

    const auto &sett = m_device->settings();

    change_index(m_ui->comboBox_barkhausen_noise_port, sett->get(MeasDeviceSetting::BarkhausenPort));

    change_index(m_ui->comboBox_gaussmet_port, sett->get(MeasDeviceSetting::GaussPort));

    change_index(m_ui->comboBox_induced_voltage_port, sett->get(MeasDeviceSetting::InducedVoltagePort));

    change_index(m_ui->comboBox_sensed_current_port, sett->get(MeasDeviceSetting::CurrentPort));

    change_index(m_ui->comboBox_polarity_mes, sett->get(MeasDeviceSetting::Polarity));

    change_index(m_ui->comboBox_port_source, sett->get(MeasDeviceSetting::SourcePort));

    m_limits.sample_rate = sett->get<double>(MeasDeviceSetting::MaxSampleRate);

    m_limits.points_per_chunk = sett->get<double>(MeasDeviceSetting::MaxPointsPerChunk);

    m_limits.voltage_range = sett->get<double>(MeasDeviceSetting::MaxVoltageRange);

    m_limits.source_voltage = sett->get<double>(MeasDeviceSetting::SourceVoltageMax);

    const auto points_per_chunk = sett->get<double>(MeasDeviceSetting::PointsPerChunk);

    const auto sample_rate = sett->get<double>(MeasDeviceSetting::SampleRate);

    const auto voltage_range = sett->get<double>(MeasDeviceSetting::VoltageRange);

    m_tune.standard_step = m_limits.source_voltage / 1e2;

    m_tune.fine_step = m_limits.source_voltage / 1e4;

    m_ui->lcdNumber->display(sett->get(MeasDeviceSetting::SourceVoltage).c_str());

    m_ui->horizontalSlider_points_per_chunk->setValue(static_cast<int>(100.0 * (points_per_chunk / m_limits.points_per_chunk)));

    m_ui->horizontalSlider_sample_rate->setValue(static_cast<int>(100.0 * (sample_rate / m_limits.sample_rate)));

    m_ui->horizontalSlider_voltage_range->setValue(static_cast<int>(100.0 * (voltage_range / m_limits.voltage_range)));

    m_ui->label_voltage_range_vals->setText(Utility::Cast::to_string(voltage_range).data());

    m_ui->label_sample_rate_vals->setText(Utility::Cast::to_string(sample_rate).data());

    m_ui->label_points_per_chunk_vals->setText(Utility::Cast::to_string(points_per_chunk).data());
}

void MeasDeviceSettings::save_settings()
{
    auto save = QMessageBox::warning(this,
                                     "Settings will be modified",
                                     "Do you want to modify current settings?" ,
                                     QMessageBox::Yes | QMessageBox::No
    );

    if(save == QMessageBox::Yes)
    {
        write_settings();

        hide();
    }
}

void MeasDeviceSettings::write_settings()
{
    const auto barkhausen_port = m_ui->comboBox_barkhausen_noise_port->currentText().toStdString();

    const auto gauss_port = m_ui->comboBox_gaussmet_port->currentText().toStdString();

    const auto induced_volt_port = m_ui->comboBox_induced_voltage_port->currentText().toStdString();

    const auto current_port = m_ui->comboBox_sensed_current_port->currentText().toStdString();

    const auto polarity = m_ui->comboBox_polarity_mes->currentText().toStdString();

    const auto s_rate_absolute = per_to_absolute(m_ui->horizontalSlider_sample_rate->value(), m_limits.sample_rate);

    const auto ppc_absolute = per_to_absolute(m_ui->horizontalSlider_points_per_chunk->value(), m_limits.points_per_chunk);

    const auto volt_absolute = per_to_absolute(m_ui->horizontalSlider_voltage_range->value(), m_limits.voltage_range);

    const auto source_volt = m_ui->lcdNumber->value();

    auto const resource = m_dev_finder_ref->usbtmc_devs().data().at(m_ui->comboBox_resource_mes->currentText().toStdString());

    m_device->stop_continuous_acq();

    m_device->change_setting(MeasDeviceSetting::BarkhausenPort, barkhausen_port);

    m_device->change_setting(MeasDeviceSetting::GaussPort, gauss_port);

    m_device->change_setting(MeasDeviceSetting::InducedVoltagePort, induced_volt_port);

    m_device->change_setting(MeasDeviceSetting::CurrentPort, current_port);

    m_device->change_setting(MeasDeviceSetting::Polarity, polarity);

    m_device->change_setting(MeasDeviceSetting::SourceVoltage, source_volt);

    m_device->change_setting(MeasDeviceSetting::SampleRate, s_rate_absolute);

    m_device->change_setting(MeasDeviceSetting::PointsPerChunk, ppc_absolute);

    m_device->change_setting(MeasDeviceSetting::VoltageRange, volt_absolute);

    m_device->change_setting(MeasDeviceSetting::Resource, resource.resource);
}

MeasDeviceSettings::~MeasDeviceSettings()
{
}


