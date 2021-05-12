//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_B_H_CHART_H
#define BARKHAUSEN_STUDIO_B_H_CHART_H

#include <chartwindow.h>
#include <mem_types.h>
#include <settings_storage.h>
#include <ui_settings.h>

class BHChart : public ChartWindow
{
    ReadWriteRef<SettingsStorage> m_settings;

    bool m_auto{ false };

    void update_settings()
    {
        const auto peak_to_peak = settings_unsafe().get<double>(BHSetting::MinY);

        view()->chart()->axisY()->setRange(-(peak_to_peak / 2), (peak_to_peak / 2));
    }


public:
    explicit BHChart(SharedData<SettingsStorage> &settings, QWidget *parent = nullptr)
            :   ChartWindow{ parent },
                m_settings{ settings }
    {
        connect(&settings_unsafe(), &BHSettings::changed, this, [&](){ update_settings(); });

        update_settings();
    }

    void set_auto_range(bool set) { m_auto = set; }

    BHSettings &settings_unsafe() { return *m_settings->ui_settings->B_H_chart.get(); }

    void update_data(const QVector<QPointF> &new_data)
    {
        view()->chart()->axisX()->setRange(new_data.first().x(), new_data.last().x());

        view()->update_data(new_data);
    }
};

#endif //BARKHAUSEN_STUDIO_B_H_CHART_H
