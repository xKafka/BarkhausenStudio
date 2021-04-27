//
// Created by fkafka on 13. 4. 2021.
//

#include "../include/chart_view.h"

ChartView::ChartView(QWidget *parent)
    :   QtCharts::QChartView{ parent },
        m_chart{ new ChartBase( scene() ) },
        m_series{ new QtCharts::QLineSeries },
        m_cursor_moving{ false }
{
    setup();

    setup_chart();
}

void ChartView::setup()
{
    setChart(m_chart);

    m_chart->addSeries(m_series);

    m_chart->createDefaultAxes();

    setMouseTracking(true);
}

void ChartView::setup_chart()
{
    m_chart->setParent(this);
    m_chart->setBackgroundVisible(false);
    m_chart->setMargins(QMargins(0, 0, 0, 0));
    m_chart->legend()->hide();
    m_chart->setPlotAreaBackgroundBrush(QBrush{ Qt::white });
    m_chart->setPlotAreaBackgroundVisible(true);

    setRenderHint(QPainter::Antialiasing);
}

void ChartView::update_data(const QVector<QPointF> &new_data)
{
    m_series->replace(new_data);
}

void ChartView::update_data(const QList<QPointF> &new_data)
{
    m_series->replace(new_data);
}

void ChartView::mouseReleaseEvent(QMouseEvent *event)
{
    m_cursor_moving = false;

    QtCharts::QChartView::mouseReleaseEvent(event);
}

void ChartView::drawForeground(QPainter* painter, const QRectF& rect)
{
    chart()->cursors()->draw_cursors(painter);
}

void ChartView::mouseDoubleClickEvent(QMouseEvent *event)
{
    QtCharts::QChartView::mouseDoubleClickEvent(event);

    chart()->cursors()->redraw();
}

void ChartView::mouseMoveEvent(QMouseEvent *event)
{
    if(m_cursor_moving)
    {
        auto mouse_position = mapToScene(event->pos());

        chart()->cursors()->update_pos(mouse_position.toPoint());
    }

    QtCharts::QChartView::mouseMoveEvent(event);
}

void ChartView::mousePressEvent(QMouseEvent *event)
{
    m_cursor_moving = true;

    QtCharts::QChartView::mousePressEvent(event);
}

