//
// Created by fkafka on 23. 4. 2021.
//

#include <usbtmc_settings.h>

void UsbtmcSettings::settings_changed()
{
    emit changed();
}

void UsbtmcSettings::to_ini_write(std::string_view file_name)
{
    IniFile file(file_name);

    if(!max_points_per_chunk.empty())
    {
        file.set_value("max_points_per_chunk", max_points_per_chunk);
    }
    if(!max_sample_rate.empty())
    {
        file.set_value("max_sample_rate", max_sample_rate);
    }
    if(!max_voltage_range.empty())
    {
        file.set_value("max_voltage_range", max_voltage_range);
    }
    if(!points_per_chunk.empty())
    {
        file.set_value("points_per_chunk", points_per_chunk);
    }
    if(!current_port.empty())
    {
        file.set_value("current_port", current_port);
    }
    if(!gauss_port.empty())
    {
        file.set_value("gauss_port", gauss_port);
    }
    if(!induced_voltage_port.empty())
    {
        file.set_value("induced_voltage_port", induced_voltage_port);
    }
    if(!barkhausen_port.empty())
    {
        file.set_value("barkhausen_port", barkhausen_port);
    }
    if(!sample_rate.empty())
    {
        file.set_value("sample_rate", sample_rate);
    }
    if(!resource.empty())
    {
        file.set_value("resource", resource);
    }
    if(!polarity.empty())
    {
        file.set_value("polarity", polarity);
    }
    if(!voltage_range.empty())
    {
        file.set_value("range", voltage_range);
    }
}

void UsbtmcSettings::from_ini(std::string_view file_name)
{
    IniFile file(file_name);

    max_points_per_chunk = file.get_value("max_points_per_chunk");
    max_sample_rate = file.get_value("max_sample_rate");
    max_voltage_range = file.get_value("max_voltage_range");
    points_per_chunk = file.get_value("points_per_chunk");
    current_port = file.get_value("current_port");
    gauss_port = file.get_value("gauss_port");
    induced_voltage_port = file.get_value("induced_voltage_port");
    barkhausen_port = file.get_value("barkhausen_port");
    sample_rate = file.get_value("sample_rate");
    resource = file.get_value("resource");
    polarity = file.get_value("polarity");
    voltage_range = file.get_value("range");
}

void UsbtmcSettings::brute_change(const UsbtmcSettings &other)
{
    max_points_per_chunk = other.max_points_per_chunk;
    max_sample_rate = other.max_sample_rate;
    max_voltage_range = other.max_voltage_range;
    points_per_chunk = other.points_per_chunk;
    current_port = other.current_port;
    gauss_port = other.gauss_port;
    induced_voltage_port = other.induced_voltage_port;
    barkhausen_port = other.barkhausen_port;
    sample_rate = other.sample_rate;
    resource = other.resource;
    polarity = other.polarity;
    voltage_range = other.voltage_range;

    settings_changed();
}

void UsbtmcSettings::concat(const UsbtmcSettings &other)
{
    if(!other.max_points_per_chunk.empty())
    {
        max_points_per_chunk = other.max_points_per_chunk;
    }
    if(!other.max_sample_rate.empty())
    {
        max_sample_rate = other.max_sample_rate;
    }
    if(!other.max_voltage_range.empty())
    {
        max_voltage_range = other.max_voltage_range;
    }
    if(!other.points_per_chunk.empty())
    {
        points_per_chunk = other.points_per_chunk;
    }
    if(!other.current_port.empty())
    {
        current_port = other.current_port;
    }
    if(!other.gauss_port.empty())
    {
        gauss_port = other.gauss_port;
    }
    if(!other.induced_voltage_port.empty())
    {
        induced_voltage_port = other.induced_voltage_port;
    }
    if(!other.barkhausen_port.empty())
    {
        barkhausen_port = other.barkhausen_port;
    }
    if(!other.sample_rate.empty())
    {
        sample_rate = other.sample_rate;
    }
    if(!other.resource.empty())
    {
        resource = other.resource;
    }
    if(!other.polarity.empty())
    {
        polarity = other.polarity;
    }
    if(!other.voltage_range.empty())
    {
        voltage_range = other.voltage_range;
    }

    settings_changed();
}
