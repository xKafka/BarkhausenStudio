//
// Created by fkafka on 23. 4. 2021.
//

#include <usbtmc_settings.h>

inline constexpr std::array names{
            "max_points_per_chunk",
            "max_sample_rate",
            "max_voltage_range",
            "points_per_chunk",
            "current_port",
            "gauss_port",
            "induced_voltage_port",
            "barkhausen_port",
            "sample_rate",
            "resource",
            "polarity",
            "range",
            "source_port",
            "source_voltage_val",
            "source_voltage_max"
    };

void UsbtmcSettings::settings_changed()
{
    emit changed();
}

void UsbtmcSettings::voltage_changed()
{
    emit voltage();
}

std::string_view UsbtmcSettings::get_name(const UsbtmcSettingName name) const
{
    return names.at(name);
}

void UsbtmcSettings::to_ini_write(std::string_view file_name)
{
    IniFile file(file_name);

    for(const auto &name : names)
    {
        const auto &map_itr = m_data.at(name);

        if(!map_itr.empty())
        {
            file.set_value(name, map_itr);
        }
    }
}

void UsbtmcSettings::from_ini(std::string_view file_name)
{
    IniFile file(file_name);

    for(const auto &name : names)
    {
        m_data.emplace(name, file.get_value(name));
    }
}

void UsbtmcSettings::brute_change(const UsbtmcSettings &other)
{
    for(const auto &name : names)
    {
        auto &map_itr = m_data.at(name);

        map_itr = other.m_data.at(name);
    }

    settings_changed();
}

void UsbtmcSettings::concat(const UsbtmcSettings &other)
{
    for(const auto &name : names)
    {
        const auto &map_itr = other.m_data.at(name);

        if(!map_itr.empty())
        {
            m_data.at(name) = map_itr;
        }
    }

    settings_changed();
}
