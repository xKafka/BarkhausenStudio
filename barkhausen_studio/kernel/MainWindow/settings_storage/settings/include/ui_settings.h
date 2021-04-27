//
// Created by fkafka on 16. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_UI_SETTINGS_H
#define BARKHAUSEN_STUDIO_UI_SETTINGS_H

#include <QObject>
#include <ini_file.h>
#include <nlohmann/json.hpp>

class ChartSettings : public QObject
{
Q_OBJECT
public: // should be private { use get/set (I'm in hurry) }
    std::string timebase{};
    std::string min_y{};
    std::string max_y{};

public:
    ChartSettings() = default;

public slots:
    void concat(const ChartSettings &other);

    void brute_change(const ChartSettings &other);

    void settings_changed();

signals:
    void changed();
};

struct UiSettings
{
    ChartSettings hysteresis{};
    ChartSettings barkhausen{};
    ChartSettings B_H_chart{};

    UiSettings() = default;

    void from_ini(std::string_view file_name);

    void to_ini_write(std::string_view file_name);
};

#endif //BARKHAUSEN_STUDIO_UI_SETTINGS_H
