//
// Created by fkafka on 23. 4. 2021.
//

#include <ui_settings.h>

void ChartSettings::brute_change(const ChartSettings &other)
{
    min_y = other.min_y;
    max_y = other.max_y;
    timebase = other.timebase;

    settings_changed();
}

void ChartSettings::concat(const ChartSettings &other)
{
    if(!other.min_y.empty())
    {
        min_y = other.min_y;
    }
    if(!other.max_y.empty())
    {
        max_y = other.max_y;
    }
    if(!other.timebase.empty())
    {
        timebase = other.timebase;
    }

    settings_changed();
}

void ChartSettings::settings_changed()
{
    emit changed();
}

void UiSettings::from_ini(std::string_view file_name)
{
    IniFile file(file_name);

    barkhausen.min_y = file.get_value("barkhausen.min_y");
    barkhausen.max_y = file.get_value("barkhausen.max_y");
    barkhausen.timebase = file.get_value("barkhausen.timebase");

    B_H_chart.min_y = file.get_value("B_H_chart.min_y");
    B_H_chart.max_y = file.get_value("B_H_chart.max_y");
    B_H_chart.timebase = file.get_value("B_H_chart.timebase");

    hysteresis.min_y = file.get_value("hysteresis.min_y");
    hysteresis.max_y = file.get_value("hysteresis.max_y");
    hysteresis.timebase = file.get_value("hysteresis.timebase");
}

void UiSettings::to_ini_write(std::string_view file_name)
{
    IniFile file(file_name);

    if(!barkhausen.min_y.empty())
    {
        file.set_value("barkhausen.min_y", barkhausen.min_y);
    }
    if(!barkhausen.max_y.empty())
    {
        file.set_value("barkhausen.max_y", barkhausen.max_y);
    }
    if(!barkhausen.timebase.empty())
    {
        file.set_value("barkhausen.timebase", barkhausen.timebase);
    }
    if(!B_H_chart.min_y.empty())
    {
        file.set_value("B_H_chart.min_y", B_H_chart.min_y);
    }
    if(!B_H_chart.max_y.empty())
    {
        file.set_value("B_H_chart.max_y", B_H_chart.max_y);
    }
    if(!B_H_chart.timebase.empty())
    {
        file.set_value("B_H_chart.timebase", B_H_chart.timebase);
    }
    if(!hysteresis.min_y.empty())
    {
        file.set_value("hysteresis.min_y", hysteresis.min_y);
    }
    if(!hysteresis.max_y.empty())
    {
        file.set_value("hysteresis.max_y", hysteresis.max_y);
    }
    if(!hysteresis.timebase.empty())
    {
        file.set_value("hysteresis.timebase", hysteresis.timebase);
    }
}