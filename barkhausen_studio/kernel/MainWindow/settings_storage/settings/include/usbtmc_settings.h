//
// Created by fkafka on 31. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_USBTMCSETTINGS_H
#define BARKHAUSEN_STUDIO_USBTMCSETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <nlohmann/json.hpp>

class UsbtmcSettings : public QObject
{
    Q_OBJECT

public:
    std::string max_points_per_chunk{};
    std::string max_sample_rate{};
    std::string max_voltage_range{};
    std::string points_per_chunk{};
    std::string current_port{};
    std::string gauss_port{};
    std::string induced_voltage_port{};
    std::string barkhausen_port{};
    std::string sample_rate{};
    std::string resource{};
    std::string polarity{};
    std::string voltage_range{};

public:
    UsbtmcSettings() = default;

    void from_ini(std::string_view file_name);

    void settings_changed();

public slots:
    void concat(const UsbtmcSettings &other);

    void brute_change(const UsbtmcSettings &other);

    void to_ini_write(std::string_view file_name);

signals:
    void changed();
};

#endif //BARKHAUSEN_STUDIO_USBTMCSETTINGS_H
