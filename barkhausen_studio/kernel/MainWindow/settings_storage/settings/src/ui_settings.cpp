//
// Created by fkafka on 23. 4. 2021.
//

#include <ui_settings.h>

UiSettings::UiSettings()
    :   hysteresis{ "hysteresis" },
        barkhausen{ "barkhausen" },
        B_H_chart{ "B_H_chart" }
{
}

void UiSettings::from_ini(std::string_view barkhausen_file_name,
                          std::string_view hysteresis_file_name,
                          std::string_view B_H_file_name)
{
    barkhausen->from_ini(barkhausen_file_name);
    hysteresis->from_ini(hysteresis_file_name);
    B_H_chart->from_ini(B_H_file_name);
}

void UiSettings::to_ini_write(std::string_view barkhausen_file_name,
                              std::string_view hysteresis_file_name,
                              std::string_view B_H_file_name)
{
    barkhausen->to_ini_write(barkhausen_file_name);
    hysteresis->to_ini_write(hysteresis_file_name);
    B_H_chart->to_ini_write(B_H_file_name);
}