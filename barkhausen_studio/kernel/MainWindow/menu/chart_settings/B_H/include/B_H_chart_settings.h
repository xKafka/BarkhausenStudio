//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_B_H_CHART_SETTINGS_H
#define BARKHAUSEN_STUDIO_B_H_CHART_SETTINGS_H

#include <QWidget>
#include <memory>
#include <B_H_chart.h>

QT_BEGIN_NAMESPACE
namespace Ui { class BHChartSettings; }
QT_END_NAMESPACE

class BHChartSettings : public QWidget
{
    Q_OBJECT

    std::unique_ptr<Ui::BHChartSettings> m_ui;

    BHChart *m_chart;

    ChartSettings *m_settings;

    void disable_cursor_buttons();

    void enable_cursor_buttons();

public:
    explicit BHChartSettings(QWidget *parent = nullptr);

    ~BHChartSettings() override;

    void set_chart(BHChart *chart);

    void set_chart_settings_controller(ChartSettings *settings);

public slots:
    void change_y_val(const int val);
    void change_timebase_val(const int val);

signals:
    void back_clicked();
};


#endif //BARKHAUSEN_STUDIO_B_H_CHART_SETTINGS_H
