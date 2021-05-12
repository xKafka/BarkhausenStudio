//
// Created by fkafka on 13. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CHART_VIEW_H
#define BARKHAUSEN_STUDIO_CHART_VIEW_H

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QGraphicsSceneEvent>
#include <QGraphicsScene>
#include <QVBoxLayout>
#include <QDebug>

#include <QtWidgets/QGraphicsTextItem>

#include "chart_base.h"

class ChartView : public QtCharts::QChartView
{
    ChartBase *m_chart;

    QtCharts::QLineSeries *m_series;

    void setup();

    void setup_chart();

    bool m_cursor_moving;

    InfoTable m_info_table;

    struct Range
    {
        double min, max;
    };

    Range m_x_axis, m_y_axis;

public:
    explicit ChartView(QWidget *parent = nullptr);

    void update_data(const QVector<QPointF> &new_data);

    inline auto *chart() { return m_chart; }

    inline auto *table() { return &m_info_table; }

    void set_x_range(double min, double max);

    void set_y_range(double min, double max);

    void create_text_field(std::initializer_list<std::pair<std::string, std::string>> &&list);

    void show_cursors();

    void hide_cursors();

protected:
    void mouseReleaseEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

    void mouseDoubleClickEvent(QMouseEvent *event) override;

    void drawForeground(QPainter* painter, const QRectF& rect) override;
};


#endif //BARKHAUSEN_STUDIO_CHART_VIEW_H
