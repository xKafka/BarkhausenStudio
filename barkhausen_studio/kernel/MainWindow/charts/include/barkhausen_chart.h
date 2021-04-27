//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_H
#define BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_H

#include <chartwindow.h>

class BarkhausenChart : public ChartWindow
{
    const ChartSettings *m_settings;

    void update_settings()
    {
        const double y_min = std::atof(m_settings->min_y.data());
        const double y_max = std::atof(m_settings->max_y.data());

        view()->chart()->axisY()->setRange(-y_max, y_max);
    }

public:
    BarkhausenChart(QWidget *parent = nullptr)
        : ChartWindow{ parent }
    {
    }

    void update_data(const QVector<QPointF> &new_data)
    {
        view()->update_data(new_data);
    }

    void update_data(const QList<QPointF> &new_data)
    {
        view()->chart()->axisX()->setRange(new_data.first().x(), new_data.last().x());

        view()->update_data(new_data);
    }

    void load_settings(const ChartSettings *settings)
    {
        m_settings = settings;

        connect(m_settings, &ChartSettings::changed, this, [&](){ update_settings(); });

        update_settings();
    }
};

#endif //BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_H
