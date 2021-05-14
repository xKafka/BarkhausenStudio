//
// Created by fkafka on 11. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <mem_types.h>

enum class MeasurementSetting
{
    AcquisitionTime = 0,
    AcquisitionPause,
    Size
};

inline const std::map<MeasurementSetting, std::string> measurement_setting_map {
    { MeasurementSetting::AcquisitionTime, "acquisition_time" },
    { MeasurementSetting::AcquisitionPause, "acquisition_pause" }
};

class MeasurementSettings : public QObject
{
    Q_OBJECT

    std::map<MeasurementSetting, std::string> m_data;

public:
    explicit MeasurementSettings()
            :   m_data{ }
    {}

    auto &map_unsafe() { return m_data; }

    template<typename CastType>
    [[nodiscard]] inline CastType get(const MeasurementSetting key) const
    {
        auto val = m_data.at(key);

        return Utility::Cast::num_cast<CastType>(m_data.at(key));
    }

    [[nodiscard]] inline auto &get(const MeasurementSetting key) const
    {
        return m_data.at(key);
    }

    template<typename CastType>
    inline void change(const MeasurementSetting key, const CastType &val)
    {
        m_data[key] = Utility::Cast::to_string(val);

        emit changed(key);
    }

    void from_ini(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : measurement_setting_map)
        {
            auto in_ini_value = file.get_value(setting.second);

            map_unsafe().emplace(setting.first, in_ini_value);
        }
    }

    void to_ini_write(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : measurement_setting_map)
        {
            const auto &map_itr = map_unsafe()[setting.first];

            if(!map_itr.empty())
            {
                file.set_value(setting.second, map_itr);
            }
        }
    }

signals:
    void changed(MeasurementSetting);
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_SETTINGS_H
