//
// Created by fkafka on 20. 4. 2021.
//

#include <meas_device_settings.h>
#include <ui_meas_device_settings.h>
#include <usbtmc_settings.h>
#include <command_creator.h>
#include <QMessageBox>
#include <QDebug>
#include <settings_names.h>

MeasDeviceSettings::MeasDeviceSettings(QWidget *parent)
        :   QWidget(parent),
            m_ui{ std::make_unique<Ui::MeasDeviceSettings>() }
{
    m_ui->setupUi(this);

    m_ui->horizontalSlider_points_per_chunk->setRange(0, 100);
    m_ui->horizontalSlider_sample_rate->setRange(0, 100);
    m_ui->horizontalSlider_voltage_range->setRange(0, 100);

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
        m_ui->label_points_per_chunk_vals->setText(QString::number(per_to_absolute(val, m_points_per_chunk_max_val)));
    });

    connect(m_ui->horizontalSlider_sample_rate, &QSlider::valueChanged, this, [&](const int val)
    {
        m_ui->label_sample_rate_vals->setText(QString::number(per_to_absolute(val, m_sample_rate_max_val)));
    });

    connect(m_ui->horizontalSlider_voltage_range, &QSlider::valueChanged, this, [&](const int val)
    {
        m_ui->label_voltage_range_vals->setText(QString::number(per_to_absolute(val, m_voltage_range_max_val)));
    });
}

void change_index(QComboBox *box, std::string_view to_find)
{
    box->setCurrentIndex(box->findText(to_find.data()));
}

void MeasDeviceSettings::select_resource()
{
    for(const auto &dev : m_dev_finder_ref->usbtmc_devs().data())
    {
        if(dev.second.resource == m_settings_ref->resource)
        {
            change_index(m_ui->comboBox_resource_mes, dev.first);
        }
    }
}

void MeasDeviceSettings::set_usbtmc_settings_controller(SharedData<UsbtmcSettings> &settings)
{
    m_settings_ref = settings;

    select_resource();

    update_shown();

    connect(m_settings_ref.get(), SIGNAL(changed()), this, SLOT(update_shown()));
}

void MeasDeviceSettings::set_device_finder_controller(SharedData<DeviceFinder> &dev_finder)
{
    m_dev_finder_ref = dev_finder;

    show_available_devices();

    connect(m_dev_finder_ref.get(), &DeviceFinder::usb_reloaded, this, [&]()
    {
        show_available_devices();

        select_resource();
    });
}

void MeasDeviceSettings::show_available_devices()
{
    const auto &devs = m_dev_finder_ref->usbtmc_devs();

    m_ui->comboBox_resource_mes->clear();

    if(devs.are_available())
    {
        for(const auto &dev : devs.data())
        {
            m_ui->comboBox_resource_mes->addItem(dev.first.data());
        }
    }
}

void MeasDeviceSettings::update_shown()
{
    change_index(m_ui->comboBox_barkhausen_noise_port, m_settings_ref->barkhausen_port);

    change_index(m_ui->comboBox_gaussmet_port, m_settings_ref->gauss_port);

    change_index(m_ui->comboBox_induced_voltage_port, m_settings_ref->induced_voltage_port);

    change_index(m_ui->comboBox_sensed_current_port, m_settings_ref->current_port);

    change_index(m_ui->comboBox_polarity_mes, m_settings_ref->polarity);

    m_sample_rate_max_val = std::atof(m_settings_ref->max_sample_rate.data());

    m_points_per_chunk_max_val = std::atof(m_settings_ref->max_points_per_chunk.data());

    m_voltage_range_max_val =  std::atof(m_settings_ref->max_voltage_range.data());

    const double points_per_chunk = std::atof(m_settings_ref->points_per_chunk.data());

    const double sample_rate = std::atof(m_settings_ref->sample_rate.data());

    const double voltage_range = std::atof(m_settings_ref->voltage_range.data());

    m_ui->horizontalSlider_points_per_chunk->setValue(static_cast<int>(100.0 * (points_per_chunk / m_points_per_chunk_max_val)));

    m_ui->horizontalSlider_sample_rate->setValue(static_cast<int>(100.0 * (sample_rate / m_sample_rate_max_val)));

    m_ui->horizontalSlider_voltage_range->setValue(static_cast<int>(100.0 * (voltage_range / m_voltage_range_max_val)));
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
    m_settings_ref->barkhausen_port = m_ui->comboBox_barkhausen_noise_port->currentText().toStdString();

    m_settings_ref->gauss_port = m_ui->comboBox_gaussmet_port->currentText().toStdString();

    m_settings_ref->induced_voltage_port = m_ui->comboBox_induced_voltage_port->currentText().toStdString();

    m_settings_ref->current_port = m_ui->comboBox_sensed_current_port->currentText().toStdString();

    m_settings_ref->polarity = m_ui->comboBox_polarity_mes->currentText().toStdString();

    m_settings_ref->sample_rate = std::to_string(per_to_absolute(m_ui->horizontalSlider_sample_rate->value(), m_sample_rate_max_val));

    m_settings_ref->points_per_chunk = std::to_string(per_to_absolute(m_ui->horizontalSlider_points_per_chunk->value(), m_points_per_chunk_max_val));

    m_settings_ref->voltage_range = std::to_string(per_to_absolute(m_ui->horizontalSlider_voltage_range->value(), m_voltage_range_max_val));

    m_settings_ref->settings_changed();

    m_settings_ref->to_ini_write(SettingsName::measurement_device);
}

MeasDeviceSettings::~MeasDeviceSettings()
{
}


