//
// Created by fkafka on 20. 4. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_measurement_settings.h" resolved

#include <measurement_settings.h>
#include <ui_measurement_settings.h>

MeasurementSettings::MeasurementSettings(Core *core, QWidget *parent)
    :   QWidget{ parent },
        m_ui{ std::make_unique<Ui::MeasurementSettings>() },
        m_device_settings{ std::make_unique<MeasDeviceSettings>(core) }
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

    connect(m_ui->pushButton_measurement_device, &QPushButton::clicked, [&]()
    {
        m_device_settings->update();

        m_device_settings->showFullScreen();
    });
}

MeasurementSettings::~MeasurementSettings()
{
}

