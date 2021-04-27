//
// Created by fkafka on 16. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_SETTINGS_STORAGE_H
#define BARKHAUSEN_STUDIO_SETTINGS_STORAGE_H

#include <QObject>
#include <usbtmc_settings.h>
#include <ui_settings.h>
#include <settings_names.h>
#include <mem_types.h>

struct SettingsStorage
{
    SharedData<UsbtmcSettings> usbtmc_settings;
    SharedData<UiSettings> ui_settings;

public:
    SettingsStorage()
        :   usbtmc_settings{  },
            ui_settings{ }
    {
        usbtmc_settings->from_ini(SettingsName::measurement_device);

        ui_settings->from_ini(SettingsName::user_interface);
    }
};

#endif //BARKHAUSEN_STUDIO_SETTINGS_STORAGE_H
