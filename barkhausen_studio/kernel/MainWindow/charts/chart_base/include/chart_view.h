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

#include "chart_base.h"

class ChartView : public QtCharts::QChartView
{
    ChartBase *m_chart;

    QtCharts::QLineSeries *m_series;

    void setup();

    void setup_chart();

    bool m_cursor_moving;

public:
    explicit ChartView(QWidget *parent = nullptr);

    void update_data(const QVector<QPointF> &new_data);

    void update_data(const QList<QPointF> &new_data);

    inline auto *chart() { return m_chart; }

protected:
    void mouseReleaseEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

    void mouseDoubleClickEvent(QMouseEvent *event) override;

    void drawForeground(QPainter* painter, const QRectF& rect) override;
};


#endif //BARKHAUSEN_STUDIO_CHART_VIEW_H
