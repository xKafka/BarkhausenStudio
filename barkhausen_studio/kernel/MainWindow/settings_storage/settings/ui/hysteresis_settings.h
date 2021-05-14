//
// Created by fkafka on 5. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_HYSTERESIS_SETTINGS_H
#define BARKHAUSEN_STUDIO_HYSTERESIS_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <mem_types.h>

enum class HysteresisSetting
{
    MinY = 0,
    MaxY,
    Exposition,
    MinExposition,
    MinRefVal,
    Size
};

inline const std::map<HysteresisSetting, std::string> hysteresis_settings_map { { HysteresisSetting::MinY, "min_y" },
                                                                                { HysteresisSetting::MaxY, "max_y" },
                                                                                { HysteresisSetting::Exposition, "exposition"},
                                                                                { HysteresisSetting::MinExposition, "min_exposition" },
                                                                                { HysteresisSetting::MinRefVal, "min_ref_val" }
};

class HysteresisSettings : public QObject
{
    Q_OBJECT

    std::map<HysteresisSetting, std::string> m_data;

    std::string m_name;

public:
    explicit HysteresisSettings(std::string_view name)
            :   m_data{ },
                m_name{ name }
    {}

    auto &name() const { return m_name; }

    auto &map_unsafe() { return m_data; }

    template<typename CastType>
    [[nodiscard]] inline CastType get(const HysteresisSetting key) const
    {
        auto val = m_data.at(key);

        return Utility::Cast::num_cast<CastType>(m_data.at(key));
    }

    [[nodiscard]] inline auto &get(const HysteresisSetting key) const
    {
        return m_data.at(key);
    }

    template<typename CastType>
    inline void change(const HysteresisSetting key, const CastType &val)
    {
        m_data[key] = Utility::Cast::to_string(val);

        emit changed(key);
    }

    void from_ini(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : hysteresis_settings_map)
        {
            auto in_ini_value = file.get_value(setting.second);

            map_unsafe().emplace(setting.first, in_ini_value);
        }
    }

    void to_ini_write(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : hysteresis_settings_map)
        {
            const auto &map_itr = map_unsafe()[setting.first];

            if(!map_itr.empty())
            {
                file.set_value(setting.second, map_itr);
            }
        }
    }

signals:
    void changed(HysteresisSetting);
};

#endif //BARKHAUSEN_STUDIO_HYSTERESIS_SETTINGS_H
