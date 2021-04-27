//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_HYSTERESIS_CHART_SETTINGS_H
#define BARKHAUSEN_STUDIO_HYSTERESIS_CHART_SETTINGS_H

#include <QWidget>
#include <memory>
#include <hysteresis_chart.h>

QT_BEGIN_NAMESPACE
namespace Ui { class HysteresisChartSettings; }
QT_END_NAMESPACE

class HysteresisChartSettings : public QWidget
{
    Q_OBJECT

    HysteresisChart *m_chart;

    ChartSettings *m_settings;

    void disable_cursor_buttons();

    void enable_cursor_buttons();

public:
    explicit HysteresisChartSettings(QWidget *parent = nullptr);

    ~HysteresisChartSettings() override;

    void set_chart(HysteresisChart *chart);

    void set_chart_settings_controller(ChartSettings *settings);

public slots:
    void change_y_val(const int val);
    void change_timebase_val(const int val);
private:
    std::unique_ptr<Ui::HysteresisChartSettings> m_ui;

signals:
    void back_clicked();
};


#endif //BARKHAUSEN_STUDIO_HYSTERESIS_CHART_SETTINGS_H
