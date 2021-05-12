//
// Created by fkafka on 5. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_BARKHAUSEN_SETTINGS_H
#define BARKHAUSEN_STUDIO_BARKHAUSEN_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <mem_types.h>

enum class BarkhausenSetting
{
    MinY = 0,
    MaxY,
    ExpositionMin,
    ExpositionMax,
    MinExpIncVal,
    MinAmplIncVal,
    Size
};

inline const std::map<BarkhausenSetting, std::string> barkhausen_settings_map { { BarkhausenSetting::MinY, "min_y" },
                                                                                { BarkhausenSetting::MaxY, "max_y" },
                                                                                { BarkhausenSetting::ExpositionMin, "exposition_min" },
                                                                                { BarkhausenSetting::ExpositionMax, "exposition_max" },
                                                                                { BarkhausenSetting::MinExpIncVal, "min_exposition_inc_val" },
                                                                                { BarkhausenSetting::MinAmplIncVal, "min_amplitude_inc_val" }
};


class BarkhausenSettings : public QObject
{
Q_OBJECT

    std::map<BarkhausenSetting, std::string> m_data;

    std::string m_name;

public:
    BarkhausenSettings(std::string_view name)
            :   m_data{ },
                m_name{ name }
    {}

    auto &name() const { return m_name; }

    auto &map_unsafe() { return m_data; }

    template<typename CastType>
    [[nodiscard]] inline CastType get(const BarkhausenSetting key) const
    {
        return Utility::Cast::num_cast<CastType>(m_data.at(key));
    }

    [[nodiscard]] inline auto &get(const BarkhausenSetting key) const
    {
        return m_data.at(key);
    }

    template<typename CastType>
    inline void change(const BarkhausenSetting key, const CastType &val)
    {
        m_data[key] = Utility::Cast::to_string(val);

        emit changed(key);
    }

    void from_ini(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : barkhausen_settings_map)
        {
            auto in_ini_value = file.get_value(setting.second);

            map_unsafe().emplace(setting.first, in_ini_value);
        }
    }

    void to_ini_write(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : barkhausen_settings_map)
        {
            const auto &map_itr = map_unsafe()[setting.first];

            if(!map_itr.empty())
            {
                file.set_value(setting.second, map_itr);
            }
        }
    }

signals:
    void changed(BarkhausenSetting);
};

#endif //BARKHAUSEN_STUDIO_BARKHAUSEN_SETTINGS_H
