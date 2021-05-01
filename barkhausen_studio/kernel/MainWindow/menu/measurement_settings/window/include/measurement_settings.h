//
// Created by fkafka on 20. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_H

#include <QWidget>
#include <memory>
#include <meas_device_settings.h>
#include <settings_storage.h>
#include <device_finder.h>
#include <core.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MeasurementSettings; }
QT_END_NAMESPACE

class MeasurementSettings : public QWidget
{
    Q_OBJECT

    std::unique_ptr<Ui::MeasurementSettings> m_ui;

    std::unique_ptr<MeasDeviceSettings> m_device_settings;

public:
    explicit MeasurementSettings(Core *core, QWidget *parent = nullptr);

    ~MeasurementSettings() override;

signals:
    void back_clicked();
};


#endif //BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_H
