//
// Created by fkafka on 1. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CHARTSETTINGSMENU_H
#define BARKHAUSEN_STUDIO_CHARTSETTINGSMENU_H

#include <chartwindow.h>
#include "../../../../settings_storage/settings/ui/ui_settings.h"
#include <B_H_chart_settings.h>
#include <barkhausen_chart_settings.h>
#include <hysteresis_chart_settings.h>
#include <mem_types.h>
#include <core.h>

#include <QWidget>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class ChartSettingsMenu; }
QT_END_NAMESPACE

class ChartSettingsMenu : public QWidget
{
    Q_OBJECT

public:
    explicit ChartSettingsMenu(HysteresisChart *hysteresis_chart,
                               BarkhausenChart *bark_chart,
                               BHChart *B_H_chart,
                               Core *core,
                               QWidget *parent = nullptr);

    ~ChartSettingsMenu() override;

private:
    std::unique_ptr<Ui::ChartSettingsMenu> m_ui;

    std::unique_ptr<BHChartSettings> m_B_H_settings;

    std::unique_ptr<HysteresisChartSettings> m_hysteresis_settings;

    std::unique_ptr<BarkhausenChartSettings> m_barkhausen_settings;

signals:
    void back_clicked();

};

#endif //BARKHAUSEN_STUDIO_CHARTSETTINGSMENU_H
