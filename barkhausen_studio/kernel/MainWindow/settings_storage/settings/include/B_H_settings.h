//
// Created by fkafka on 5. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_B_H_SETTINGS_H
#define BARKHAUSEN_STUDIO_B_H_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <mem_types.h>
#include <typeindex>

#include <any>


enum class BHSetting
{
    MinY = 0,
    MaxY,
    Exposition,
    MinExposition,
    MinRefVal,
    Size
};

inline const std::map<BHSetting, std::string> B_H_settings_map {    { BHSetting::MinY, "min_y" },
                                                                    { BHSetting::MaxY, "max_y" },
                                                                    { BHSetting::Exposition, "exposition" },
                                                                    { BHSetting::MinExposition, "min_exposition" },
                                                                    { BHSetting::MinRefVal, "min_ref_val" }
};

class BHSettings : public QObject
{
    Q_OBJECT

    std::map<BHSetting, std::string> m_data;

    std::string m_name;

public:
    BHSettings(std::string_view name)
            :   m_data{ },
                m_name{ name }
    {}

    auto &name() const { return m_name; }

    auto &map_unsafe() { return m_data; }

    template<typename CastType>
    [[nodiscard]] inline CastType get(const BHSetting key) const
    {
        return Utility::Cast::num_cast<CastType>(m_data.at(key));
    }

    [[nodiscard]] inline auto &get(const BHSetting key) const
    {
        return m_data.at(key);
    }

    template<typename CastType>
    inline void change(const BHSetting key, const CastType &val)
    {
        m_data[key] = Utility::Cast::to_string(val);

        emit changed(key);
    }

    void from_ini(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : B_H_settings_map)
        {
            auto in_ini_value = file.get_value(setting.second);

            map_unsafe().emplace(setting.first, in_ini_value);
        }
    }

    void to_ini_write(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : B_H_settings_map)
        {
            const auto &map_itr = map_unsafe()[setting.first];

            if(!map_itr.empty())
            {
                file.set_value(setting.second, map_itr);
            }
        }
    }

signals:
    void changed(BHSetting);
};
#endif //BARKHAUSEN_STUDIO_B_H_SETTINGS_H
