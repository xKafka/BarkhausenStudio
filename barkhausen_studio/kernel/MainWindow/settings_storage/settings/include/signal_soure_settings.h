//
// Created by fkafka on 10. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_SIGNAL_SOURE_SETTINGS_H
#define BARKHAUSEN_STUDIO_SIGNAL_SOURE_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <mem_types.h>

enum class SignalSourceSetting
{
    WaveType = 0,
    Offset,
    OffsetMinInc,
    Amplitude,
    AmplMinInc,
    Frequency,
    FreqMinInc,
    ChartPeakToPeak,
    Size
};

inline const std::map<SignalSourceSetting, std::string> signal_source_map { { SignalSourceSetting::WaveType, "wave_type" },
                                                                                { SignalSourceSetting::Offset, "offset" },
                                                                                { SignalSourceSetting::OffsetMinInc, "offset_min_inc" },
                                                                                { SignalSourceSetting::Amplitude, "amplitude" },
                                                                                { SignalSourceSetting::AmplMinInc, "amplitude_min_inc" },
                                                                                { SignalSourceSetting::Frequency, "frequency"},
                                                                                { SignalSourceSetting::FreqMinInc, "frequency_min_inc" },
                                                                                { SignalSourceSetting::ChartPeakToPeak, "chart_peak_to_peak" },
};

class SignalSourceSettings : public QObject
{
    Q_OBJECT

    std::map<SignalSourceSetting, std::string> m_data;

public:
    explicit SignalSourceSettings()
            :   m_data{ }
    {}

    auto &map_unsafe() { return m_data; }

    template<typename CastType>
    [[nodiscard]] inline CastType get(const SignalSourceSetting key) const
    {
        auto val = m_data.at(key);

        return Utility::Cast::num_cast<CastType>(m_data.at(key));
    }

    [[nodiscard]] inline auto &get(const SignalSourceSetting key) const
    {
        return m_data.at(key);
    }

    template<typename CastType>
    inline void change(const SignalSourceSetting key, const CastType &val)
    {
        m_data[key] = Utility::Cast::to_string(val);

        emit changed(key);
    }

    void from_ini(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : signal_source_map)
        {
            auto in_ini_value = file.get_value(setting.second);

            map_unsafe().emplace(setting.first, in_ini_value);
        }
    }

    void to_ini_write(std::string_view file_name)
    {
        IniFile file(file_name);

        for(const auto &setting : signal_source_map)
        {
            const auto &map_itr = map_unsafe()[setting.first];

            if(!map_itr.empty())
            {
                file.set_value(setting.second, map_itr);
            }
        }
    }

signals:
    void changed(SignalSourceSetting);
};

#endif //BARKHAUSEN_STUDIO_SIGNAL_SOURE_SETTINGS_H
