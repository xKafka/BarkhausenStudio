//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_B_H_CHART_SETTINGS_H
#define BARKHAUSEN_STUDIO_B_H_CHART_SETTINGS_H

#include <QWidget>
#include <memory>
#include <B_H_chart.h>
#include <mem_types.h>
#include <core.h>

QT_BEGIN_NAMESPACE
namespace Ui { class BHChartSettings; }
QT_END_NAMESPACE

class BHChartSettings : public QWidget
{
    Q_OBJECT

    std::unique_ptr<Ui::BHChartSettings> m_ui;

    BHChart *m_chart;

    void disable_cursor_buttons();

    void enable_cursor_buttons();

public:
    explicit BHChartSettings(BHChart *chart, Core *core, QWidget *parent = nullptr);

    ~BHChartSettings() override;

public slots:
    void change_peak_to_peak(int val);
    void change_timebase_val(int val);

signals:
    void back_clicked();
};

#endif //BARKHAUSEN_STUDIO_B_H_CHART_SETTINGS_H
