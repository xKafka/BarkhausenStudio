//
// Created by fkafka on 20. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_WINDOW_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_WINDOW_H

#include <QWidget>
#include <memory>
#include <meas_device_settings.h>
#include <settings_storage.h>
#include <device_finder.h>
#include <measurement_and_signal_settings.h>
#include <core.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MeasurementSettingsWindow; }
QT_END_NAMESPACE

class MeasurementSettingsWindow : public QWidget
{
    Q_OBJECT

    std::unique_ptr<Ui::MeasurementSettingsWindow> m_ui;

    std::unique_ptr<MeasDeviceSettings> m_device_settings;

    std::unique_ptr<MeasurementAndSignalSettings> m_mes_settings;

public:
    explicit MeasurementSettingsWindow(Core *core, QWidget *parent = nullptr);

    ~MeasurementSettingsWindow() override;

signals:
    void back_clicked();
};


#endif //BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_WINDOW_H
