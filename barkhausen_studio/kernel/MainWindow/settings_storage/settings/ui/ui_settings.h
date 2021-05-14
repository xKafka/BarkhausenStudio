//
// Created by fkafka on 16. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_UI_SETTINGS_H
#define BARKHAUSEN_STUDIO_UI_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <mem_types.h>
#include <nlohmann/json.hpp>

#include "hysteresis_settings.h"
#include "B_H_settings.h"
#include "barkhausen_settings.h"

struct UiSettings
{
    SharedData<HysteresisSettings> hysteresis;
    SharedData<BarkhausenSettings> barkhausen;
    SharedData<BHSettings> B_H_chart;

    UiSettings()
        :   hysteresis{ "hysteresis" },
            barkhausen{ "barkhausen" },
            B_H_chart{ "B_H_chart" }
    {}

    using SType = std::string_view;

    void from_ini(SType barkhausen_file_name, SType hysteresis_file_name, SType B_H_file_name)
    {
        barkhausen->from_ini(barkhausen_file_name);
        hysteresis->from_ini(hysteresis_file_name);
        B_H_chart->from_ini(B_H_file_name);
    }

    void to_ini_write(SType barkhausen_file_name, SType hysteresis_file_name, SType B_H_file_name)
    {
        barkhausen->to_ini_write(barkhausen_file_name);
        hysteresis->to_ini_write(hysteresis_file_name);
        B_H_chart->to_ini_write(B_H_file_name);
    }
};

#endif //BARKHAUSEN_STUDIO_UI_SETTINGS_H
