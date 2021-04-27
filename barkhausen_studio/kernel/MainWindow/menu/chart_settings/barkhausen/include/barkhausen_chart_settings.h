//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_SETTINGS_H
#define BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_SETTINGS_H

#include <QWidget>
#include <barkhausen_chart.h>

QT_BEGIN_NAMESPACE
namespace Ui { class BarkhausenChartSettings; }
QT_END_NAMESPACE

class BarkhausenChartSettings : public QWidget {
Q_OBJECT

    BarkhausenChart *m_chart;

    ChartSettings *m_settings;

    void disable_cursor_buttons();

    void enable_cursor_buttons();

public:
    explicit BarkhausenChartSettings(QWidget *parent = nullptr);

    ~BarkhausenChartSettings() override;

    void set_chart(BarkhausenChart *chart);

    void set_chart_settings_controller(ChartSettings *settings);

public slots:
    void change_y_val(const int val);
    void change_timebase_val(const int val);

private:
    std::unique_ptr<Ui::BarkhausenChartSettings> m_ui;

signals:
    void back_clicked();
};

#endif //BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_SETTINGS_H
