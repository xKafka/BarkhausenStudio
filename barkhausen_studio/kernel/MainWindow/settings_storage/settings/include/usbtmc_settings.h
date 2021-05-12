//
// Created by fkafka on 31. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_USBTMCSETTINGS_H
#define BARKHAUSEN_STUDIO_USBTMCSETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <nlohmann/json.hpp>
#include <array>
#include <mem_types.h>

enum UsbtmcSettingName
{
    MaxPointsPerChunk = 0,
    MaxSampleRate,
    MaxVoltageRange,
    PointsPerChunk,
    CurrentPort,
    GaussPort,
    InducedVoltagePort,
    BarkhausenPort,
    SampleRate,
    Resource,
    Polarity,
    VoltageRange,
    SourcePort,
    SourceVoltage,
    SourceVoltageMax
};

class UsbtmcSettings : public QObject
{
    Q_OBJECT

    std::map<std::string, std::string> m_data;

    std::string_view get_name(UsbtmcSettingName name) const;

public:
    UsbtmcSettings() = default;

    template<typename CastType>
    [[nodiscard]] inline CastType get(const UsbtmcSettingName key) const
    {
        const auto key_val = get_name(key).data();

        return Utility::Cast::num_cast<CastType>(m_data.at(key_val));
    }

    inline auto &get(const UsbtmcSettingName key) const
    {
        const auto key_val = get_name(key).data();

        return m_data.at(key_val);
    }

    template<typename CastType>
    inline void change(const UsbtmcSettingName key, const CastType &val)
    {
        const auto key_val = get_name(key).data();

        m_data[key_val] = Utility::Cast::to_string(val);
    }

    void from_ini(std::string_view file_name);

    void settings_changed();

    void voltage_changed();

public slots:
    void concat(const UsbtmcSettings &other);

    void brute_change(const UsbtmcSettings &other);

    void to_ini_write(std::string_view file_name);

signals:
    void changed();

    void voltage();
};

#endif //BARKHAUSEN_STUDIO_USBTMCSETTINGS_H
