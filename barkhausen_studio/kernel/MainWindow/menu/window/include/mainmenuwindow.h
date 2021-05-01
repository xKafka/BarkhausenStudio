//
// Created by fkafka on 1. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MAINMENUWINDOW_H
#define BARKHAUSEN_STUDIO_MAINMENUWINDOW_H

#include <chartsettingsmenu.h>
#include <chartwindow.h>
#include <measurement_settings.h>
#include <data_creator.h>
#include <device_finder.h>
#include <mem_types.h>
#include <core.h>

#include <QWidget>
#include <QPushButton>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenuWindow; }
QT_END_NAMESPACE

class MainWindow;

class MainMenuWindow : public QWidget
{
    Q_OBJECT

    std::unique_ptr<ChartSettingsMenu> m_chart_settings_menu;

    std::unique_ptr<MeasurementSettings> m_mes_settings_menu;

    std::unique_ptr<Ui::MainMenuWindow> m_ui;

    ReadOnlyRef<DeviceFinder> m_dev_finder;

    void close_api();

    void start_measurement();

    void stop_measurement();

    void single_shot_measurement();

    void devices_not_available_window();

    void swap_widgets(QWidget *src, QWidget *des);

public:
    MainMenuWindow(Core *core, QWidget *parent = nullptr);

    ~MainMenuWindow() override;

    inline auto *chart_settings_menu() { return m_chart_settings_menu.get(); }

signals:
    void back_clicked();

    void start();

    void stop();

    void single_shot();
};

#endif //BARKHAUSEN_STUDIO_MAINMENUWINDOW_H