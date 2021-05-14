//
// Created by fkafka on 13. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_SETTINGS_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <mem_types.h>

enum class MeasDeviceSetting
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

inline const std::map<MeasDeviceSetting, std::string> meas_device_settings_map {
        { MeasDeviceSetting::MaxPointsPerChunk, "max_points_per_chunk" },
        { MeasDeviceSetting::MaxSampleRate, "max_sample_rate" },
        { MeasDeviceSetting::MaxVoltageRange, "max_voltage_range" },
        { MeasDeviceSetting::PointsPerChunk, "points_per_chunk" },
        { MeasDeviceSetting::CurrentPort, "current_port" },
        { MeasDeviceSetting::GaussPort, "gauss_port" },
        { MeasDeviceSetting::InducedVoltagePort, "induced_voltage_port" },
        { MeasDeviceSetting::BarkhausenPort, "barkhausen_port" },
        { MeasDeviceSetting::SampleRate, "sample_rate" },
        { MeasDeviceSetting::Resource, "resource" },
        { MeasDeviceSetting::Polarity, "polarity" },
        { MeasDeviceSetting::VoltageRange, "range" },
        { MeasDeviceSetting::SourcePort, "source_port" },
        { MeasDeviceSetting::SourceVoltage, "source_voltage_val" },
        { MeasDeviceSetting::SourceVoltageMax, "source_voltage_max" },
};

class MeasurementDeviceSettings : public QObject
{
    Q_OBJECT

    std::map<MeasDeviceSetting, std::string> m_data;

public:
    explicit MeasurementDeviceSettings()
            :   m_data{ }
    {}

    auto &map_unsafe() { return m_data; }

    template<typename CastType>
    [[nodiscard]] inline CastType get(const MeasDeviceSetting key) const
    {
        auto val = m_data.at(key);

        return Utility::Cast::num_cast<CastType>(m_data.at(key));
    }

    [[nodiscard]] inline auto &get(const MeasDeviceSetting key) const
    {
        return m_data.at(key);
    }

    template<typename CastType>
    inline void change(const MeasDeviceSetting key, const CastType &val)
    {
        m_data[key] = Utility::Cast::to_string(val);

        emit changed(key);
    }

    void from_ini(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : meas_device_settings_map)
        {
            auto in_ini_value = file.get_value(setting.second);

            map_unsafe().emplace(setting.first, in_ini_value);
        }
    }

    void to_ini_write(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : meas_device_settings_map)
        {
            const auto &map_itr = map_unsafe()[setting.first];

            if(!map_itr.empty())
            {
                file.set_value(setting.second, map_itr);
            }
        }
    }

signals:
    void changed(MeasDeviceSetting);
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_SETTINGS_H
