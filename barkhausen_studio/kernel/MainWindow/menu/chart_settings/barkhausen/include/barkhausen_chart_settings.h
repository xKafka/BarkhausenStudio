//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_SETTINGS_H
#define BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_SETTINGS_H

#include <QWidget>
#include <barkhausen_chart.h>
#include <mem_types.h>
#include <core.h>

QT_BEGIN_NAMESPACE
namespace Ui { class BarkhausenChartSettings; }
QT_END_NAMESPACE

class BarkhausenChartSettings : public QWidget
{
    Q_OBJECT

    ReadWriteRef<DataCreator> m_d_creator;

    BarkhausenChart *m_chart;

    struct DialValue
    {
        int amplitude, ampl_offset, timebase, timebase_offset;
    };

    DialValue m_dial_prev;

    void disable_cursor_buttons();

    void enable_cursor_buttons();

public:
    explicit BarkhausenChartSettings(BarkhausenChart *chart, Core *core, QWidget *parent = nullptr);

    ~BarkhausenChartSettings() override;

public slots:
    void change_timebase(int value);

    void change_timebase_offset(int value);

    void change_amplitude(int value);

    void change_amplitude_offset(int value);

private:
    std::unique_ptr<Ui::BarkhausenChartSettings> m_ui;

signals:
    void back_clicked();
};

#endif //BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_SETTINGS_H
