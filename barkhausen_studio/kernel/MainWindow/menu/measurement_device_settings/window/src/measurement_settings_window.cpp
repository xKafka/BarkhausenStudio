//
// Created by fkafka on 20. 4. 2021.
//

#include <measurement_settings_window.h>
#include <ui_measurement_settings_window.h>

MeasurementSettingsWindow::MeasurementSettingsWindow(Core *core, QWidget *parent)
    :   QWidget{ parent },
        m_ui{ std::make_unique<Ui::MeasurementSettingsWindow>() },
        m_device_settings{ std::make_unique<MeasDeviceSettings>(core) },
        m_mes_settings{ std::make_unique<MeasurementAndSignalSettings>(core) }
{
    m_ui->setupUi(this);

    m_device_settings->hide();

    connect(m_ui->pushButton_back, &QPushButton::clicked, this, [&]()
    {
        emit back_clicked();

        hide();
    });

    connect(m_device_settings.get(), &MeasDeviceSettings::back_clicked, this, [&]()
    {
        m_device_settings->hide();
    });

    connect(m_mes_settings.get(), &MeasurementAndSignalSettings::back_clicked, this, [&]()
    {
        m_mes_settings->hide();
    });

    connect(m_ui->pushButton_measurement_device_settings, &QPushButton::clicked, [&]()
    {
        m_device_settings->update();

        m_device_settings->showFullScreen();
    });

    connect(m_ui->pushButton_measurement_settings, &QPushButton::clicked, [&]()
    {
        m_mes_settings->showFullScreen();
    });
}

MeasurementSettingsWindow::~MeasurementSettingsWindow()
{
}