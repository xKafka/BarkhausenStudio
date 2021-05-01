//
// Created by fkafka on 20. 4. 2021.
//

#include <meas_device_settings.h>
#include <ui_meas_device_settings.h>
#include <usbtmc_settings.h>
#include <QMessageBox>
#include <QDebug>
#include <settings_names.h>
#include <sstream>
#include <utils.h>

MeasDeviceSettings::MeasDeviceSettings(Core *core, QWidget *parent)
        :   QWidget(parent),
            m_settings_ref{ core->settings_storage_unsafe()->usbtmc_settings },
            m_dev_finder_ref{ core->device_finder_unsafe() },
            m_ui{ std::make_unique<Ui::MeasDeviceSettings>() },
            m_is_voltage_settings_active{ false }
{
    m_ui->setupUi(this);

    setup_ranges();

    setup_shown();

    connect(m_settings_ref.get(), SIGNAL(changed()), this, SLOT(update_shown()));

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
    m_settings_ref->change(UsbtmcSettingName::SourceVoltage, m_ui->lcdNumber->value());

    m_settings_ref->voltage_changed();
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
        if(dev.second.resource == m_settings_ref->get(UsbtmcSettingName::Resource))
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

    change_index(m_ui->comboBox_barkhausen_noise_port, m_settings_ref->get(UsbtmcSettingName::BarkhausenPort));

    change_index(m_ui->comboBox_gaussmet_port, m_settings_ref->get(UsbtmcSettingName::GaussPort));

    change_index(m_ui->comboBox_induced_voltage_port, m_settings_ref->get(UsbtmcSettingName::InducedVoltagePort));

    change_index(m_ui->comboBox_sensed_current_port, m_settings_ref->get(UsbtmcSettingName::CurrentPort));

    change_index(m_ui->comboBox_polarity_mes, m_settings_ref->get(UsbtmcSettingName::Polarity));

    change_index(m_ui->comboBox_port_source, m_settings_ref->get(UsbtmcSettingName::SourcePort));

    m_limits.sample_rate = m_settings_ref->get<double>(UsbtmcSettingName::MaxSampleRate);

    m_limits.points_per_chunk = m_settings_ref->get<double>(UsbtmcSettingName::MaxPointsPerChunk);

    m_limits.voltage_range = m_settings_ref->get<double>(UsbtmcSettingName::MaxVoltageRange);

    m_limits.source_voltage = m_settings_ref->get<double>(UsbtmcSettingName::SourceVoltageMax);

    const auto points_per_chunk = m_settings_ref->get<double>(UsbtmcSettingName::PointsPerChunk);

    const auto sample_rate = m_settings_ref->get<double>(UsbtmcSettingName::SampleRate);

    const auto voltage_range = m_settings_ref->get<double>(UsbtmcSettingName::VoltageRange);

    m_tune.standard_step = m_limits.source_voltage / 1e2;

    m_tune.fine_step = m_limits.source_voltage / 1e4;

    m_ui->lcdNumber->display(m_settings_ref->get(UsbtmcSettingName::SourceVoltage).c_str());

    m_ui->horizontalSlider_points_per_chunk->setValue(static_cast<int>(100.0 * (points_per_chunk / m_limits.points_per_chunk)));

    m_ui->horizontalSlider_sample_rate->setValue(static_cast<int>(100.0 * (sample_rate / m_limits.sample_rate)));

    m_ui->horizontalSlider_voltage_range->setValue(static_cast<int>(100.0 * (voltage_range / m_limits.voltage_range)));
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




    m_settings_ref->change(UsbtmcSettingName::BarkhausenPort, barkhausen_port);

    m_settings_ref->change(UsbtmcSettingName::GaussPort, gauss_port);

    m_settings_ref->change(UsbtmcSettingName::InducedVoltagePort, induced_volt_port);

    m_settings_ref->change(UsbtmcSettingName::CurrentPort, current_port);

    m_settings_ref->change(UsbtmcSettingName::Polarity, polarity);

    m_settings_ref->change(UsbtmcSettingName::SourceVoltage, m_ui->lcdNumber->value());

    m_settings_ref->change(UsbtmcSettingName::SampleRate, per_to_absolute(m_ui->horizontalSlider_sample_rate->value(), m_limits.sample_rate));

    m_settings_ref->change(UsbtmcSettingName::PointsPerChunk, per_to_absolute(m_ui->horizontalSlider_points_per_chunk->value(), m_limits.points_per_chunk));

    m_settings_ref->change(UsbtmcSettingName::VoltageRange, per_to_absolute(m_ui->horizontalSlider_voltage_range->value(), m_limits.voltage_range));

    m_settings_ref->settings_changed();

    m_settings_ref->to_ini_write(SettingsName::measurement_device);
}

MeasDeviceSettings::~MeasDeviceSettings()
{
}


