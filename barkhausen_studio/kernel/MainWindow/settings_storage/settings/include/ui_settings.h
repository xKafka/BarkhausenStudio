//
// Created by fkafka on 16. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_UI_SETTINGS_H
#define BARKHAUSEN_STUDIO_UI_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <mem_types.h>
#include <nlohmann/json.hpp>

#include <hysteresis_settings.h>
#include <B_H_settings.h>
#include <barkhausen_settings.h>

struct UiSettings
{
    SharedData<HysteresisSettings> hysteresis;
    SharedData<BarkhausenSettings> barkhausen;
    SharedData<BHSettings> B_H_chart;

    UiSettings();

    void from_ini(std::string_view barkhausen_file_name,
                  std::string_view hysteresis_file_name,
                  std::string_view B_H_file_name);

    void to_ini_write(std::string_view barkhausen_file_name,
                      std::string_view hysteresis_file_name,
                      std::string_view B_H_file_name);
};

#endif //BARKHAUSEN_STUDIO_UI_SETTINGS_H
