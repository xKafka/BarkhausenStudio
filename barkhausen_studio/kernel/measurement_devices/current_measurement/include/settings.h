//
// Created by fkafka on 12. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_SETTINGS_H
#define BARKHAUSEN_STUDIO_SETTINGS_H

#include <QSettings>
#include <QApplication>
#include <utility>
#include <filesystem>
#include <QString>
#include <command.h>
#include <utils.h>

//!module::{ "current_sensor" } keys::{ "change" } args::{ "settings" "points_per_chunk=1000" "port=101" "sample_rate=250000" "resource=USB::0x0957::0x1618::INSTR" }

inline const std::string points_per_chunk { "points_per_chunk" };
inline const std::string port { "port" };
inline const std::string sample_rate { "sample_rate" };
inline const std::string resource { "resource" };
inline const std::string polarity { "polarity" };
inline const std::string range { "range" };

struct Settings
{
    std::string points_per_chunk;
    std::string port;
    std::string sample_rate;
    std::string resource;
    std::string polarity;
    std::string range;

    Settings() = default;
};

class SettingsIni
{
    Settings m_settings{};
    QSettings m_ini{};

    [[nodiscard]] QString config_q_string_path(const std::string &config_name) const
    {
        std::string ret_val{utils::file_system::current_path() + "/config/" + config_name + ".ini" };

        return QString::fromUtf8(ret_val.c_str());
    }

public:
    SettingsIni() = default;

    explicit SettingsIni(const std::string &name)
        :   m_ini{ config_q_string_path(name), QSettings::IniFormat }
    {
        reload_settings();
    }

    [[nodiscard]] inline auto &settings() const { return m_settings; }

    [[nodiscard]] std::string read_value_from_ini(const std::string &key) const
    {
        return m_ini.value(key.data()).toString().toStdString();
    }

    void reload_settings()
    {
        m_settings.resource = read_value_from_ini(resource);
        m_settings.sample_rate = read_value_from_ini(sample_rate);
        m_settings.points_per_chunk = read_value_from_ini(points_per_chunk);
        m_settings.port = read_value_from_ini(port);
        m_settings.range = read_value_from_ini(range);
        m_settings.polarity = read_value_from_ini(polarity);
    }

    void find_and_change(std::string_view key, std::string_view value)
    {
        auto change_in_ini_settings = [&]() { m_ini.setValue(key.data(), value.data()); };

        if(key == points_per_chunk)
            m_settings.points_per_chunk = value;

        if(key == port)
            m_settings.port = value;

        if(key == sample_rate)
            m_settings.sample_rate = value;

        if(key == resource)
            m_settings.resource = value;

        if(key == polarity)
            m_settings.polarity = value;

        if(key == range)
            m_settings.range = value;

        change_in_ini_settings();
    }

    void change_setting(const Command &cmd)
    {
        for(const auto &arg : cmd.args)
        {
            const auto map_key_val = utils::parser::parse_key_value_with_eq_sign(arg);

            find_and_change(map_key_val.first, map_key_val.second);
        }
    }

    [[nodiscard]] std::string settings_to_args() const
    {
        std::string ret_val;

        ret_val += "{ \"points_per_chunk=" + read_value_from_ini(points_per_chunk) + "\" ";
        ret_val += "\"port=" + read_value_from_ini(port) + "\" ";
        ret_val += "\"sample_rate=" + read_value_from_ini(sample_rate) + "\" ";
        ret_val += "\"resource=" + read_value_from_ini(resource) + "\" ";
        ret_val += "\"polarity=" + read_value_from_ini(polarity) + "\" ";
        ret_val += "\"range=" + read_value_from_ini(range) + "\" }";

        return ret_val;
    }
};

#endif //BARKHAUSEN_STUDIO_SETTINGS_H
