//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_HYSTERESIS_CHART_SETTINGS_H
#define BARKHAUSEN_STUDIO_HYSTERESIS_CHART_SETTINGS_H

#include <QWidget>
#include <memory>
#include <hysteresis_chart.h>
#include <mem_types.h>
#include <core.h>

QT_BEGIN_NAMESPACE
namespace Ui { class HysteresisChartSettings; }
QT_END_NAMESPACE

class HysteresisChartSettings : public QWidget
{
    Q_OBJECT

    HysteresisChart *m_chart;

    void disable_cursor_buttons();

    void enable_cursor_buttons();

public:
    explicit HysteresisChartSettings(HysteresisChart *chart, Core *core, QWidget *parent = nullptr);

    ~HysteresisChartSettings() override;

public slots:
    void change_peak_to_peak(int val);
    void change_timebase_val(int val);

private:
    std::unique_ptr<Ui::HysteresisChartSettings> m_ui;

signals:
    void back_clicked();
};


#endif //BARKHAUSEN_STUDIO_HYSTERESIS_CHART_SETTINGS_H
