//
// Created by fkafka on 6. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CHARTWINDOW_H
#define BARKHAUSEN_STUDIO_CHARTWINDOW_H

#include <qt5/QtWidgets/QWidget>
#include <qt5/QtCharts/QChartGlobal>
#include <qt5/QtWidgets/QVBoxLayout>
#include <qt5/QtWidgets/QLabel>
#include <qt5/QtCore/QTimer>
#include <qt5/QtCore/QThread>

#include "chart_view.h"
#include "../../../settings_storage/settings/ui/ui_settings.h"

QT_CHARTS_BEGIN_NAMESPACE
    class QLineSeries;
    class QChart;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

QT_BEGIN_NAMESPACE
namespace Ui { class ChartWindow; }
QT_END_NAMESPACE

class ChartWindow : public QWidget
{
    Q_OBJECT

    std::unique_ptr<Ui::ChartWindow> m_ui;

    QVBoxLayout *m_layout;

    QRect m_after_double_click_geometry;
    QRect m_original_geometry;

    bool m_resized;

    void setup();

protected:
    ChartView *m_view_base;

protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;

public:
    explicit ChartWindow(QWidget *parent = nullptr);

    ~ChartWindow() override;

    void set_resize_factor(const QRect &geo);

    [[nodiscard]] inline auto is_resized() const { return m_resized; }

    [[nodiscard]] inline auto *view() const { return m_view_base; }
};

#endif //BARKHAUSEN_STUDIO_CHARTWINDOW_H
