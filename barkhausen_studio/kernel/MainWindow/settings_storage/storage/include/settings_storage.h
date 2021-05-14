//
// Created by fkafka on 16. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_SETTINGS_STORAGE_H
#define BARKHAUSEN_STUDIO_SETTINGS_STORAGE_H

#include <QObject>
#include <measurement_device_settings.h>
#include <signal_source_settings.h>
#include <ui_settings.h>
#include <settings_names.h>
#include <measurement_settings.h>
#include <mem_types.h>

struct SettingsStorage
{
    SharedData<MeasurementDeviceSettings> meas_dev_settings;
    SharedData<SignalSourceSettings> signal_source_settings;
    SharedData<UiSettings> ui_settings;
    SharedData<MeasurementSettings> measurement_settings;

public:
    SettingsStorage()
        :   meas_dev_settings{  },
            ui_settings{ },
            signal_source_settings{ },
            measurement_settings{ }
    {
        meas_dev_settings->from_ini(SettingsName::measurement_device);

        ui_settings->from_ini(SettingsName::barkhausen_settings,
                              SettingsName::hysteresis_settings,
                              SettingsName::B_H_settings);

        signal_source_settings->from_ini(SettingsName::signal_source);

        measurement_settings->from_ini(SettingsName::measurement_settings);
    }

    ~SettingsStorage()
    {
        meas_dev_settings->to_ini_write(SettingsName::measurement_device);

        ui_settings->to_ini_write(SettingsName::barkhausen_settings,
                                  SettingsName::hysteresis_settings,
                                  SettingsName::B_H_settings);

        signal_source_settings->to_ini_write(SettingsName::signal_source);

        measurement_settings->to_ini_write(SettingsName::measurement_settings);
    }
};

#endif //BARKHAUSEN_STUDIO_SETTINGS_STORAGE_H
