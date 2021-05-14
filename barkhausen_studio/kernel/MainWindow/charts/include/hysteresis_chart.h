//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_HYSTERESIS_CHART_H
#define BARKHAUSEN_STUDIO_HYSTERESIS_CHART_H

#include <chartwindow.h>
#include <mem_types.h>
#include <settings_storage.h>
#include "../../settings_storage/settings/ui/ui_settings.h"

class HysteresisChart : public ChartWindow
{
    ReadWriteRef<SettingsStorage> m_settings;

    bool m_auto{ false };

    void update_settings()
    {
        const auto peak_to_peak = settings_unsafe().get<double>(HysteresisSetting::MinY);

        view()->chart()->axisY()->setRange(-(peak_to_peak / 2), (peak_to_peak / 2));
    }

public:
    explicit HysteresisChart(SharedData<SettingsStorage> &settings, QWidget *parent = nullptr)
        :   ChartWindow{ parent },
            m_settings{ settings }
    {
        connect(&settings_unsafe(), &HysteresisSettings::changed, this, [&](){ update_settings(); });

        update_settings();
    }

    void set_auto_range(bool set) { m_auto = set; }

    HysteresisSettings &settings_unsafe() { return *m_settings->ui_settings->hysteresis.get(); }

    void set_auto(bool set) { m_auto = set; }

    void update_data(const QVector<QPointF> &new_data)
    {
        if(m_auto)
        {
            const auto max = std::max_element(new_data.begin(), new_data.end(), [](const QPointF &a, const QPointF &b)
            {
                return a.y() < b.y();
            });

            const auto min = std::min_element(new_data.begin(), new_data.end(), [](const QPointF &a, const QPointF &b)
            {
                return a.y() > b.y();
            });

            view()->chart()->axisY()->setRange(min->y(), max->y());
        }

        view()->chart()->axisX()->setRange(new_data.first().x(), new_data.last().x());

        view()->update_data(new_data);
    }
};

#endif //BARKHAUSEN_STUDIO_HYSTERESIS_CHART_H
