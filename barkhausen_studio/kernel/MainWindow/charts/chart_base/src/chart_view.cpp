//
// Created by fkafka on 13. 4. 2021.
//

#include "../include/chart_view.h"

ChartView::ChartView(QWidget *parent)
    :   QtCharts::QChartView{ parent },
        m_chart{ new ChartBase( scene() ) },
        m_series{ new QtCharts::QLineSeries },
        m_cursor_moving{ false },
        m_info_table{ }
{
    setup();

    setup_chart();

    scene()->addItem(&m_info_table);

    m_chart->setZValue(-1.0);

    m_chart->setAcceptHoverEvents(true);
}

void ChartView::setup()
{
    setChart(m_chart);

    m_chart->addSeries(m_series);

    m_chart->createDefaultAxes();

    setMouseTracking(true);
}

void ChartView::create_text_field(std::initializer_list<std::pair<std::string, std::string>> &&list)
{
    m_info_table.create_text_field(list);

    m_info_table.change_pos(geometry().center());
}

void ChartView::set_x_range(double min, double max)
{
    chart()->axisX()->setRange(min, max);
    m_x_axis.min = min;
    m_x_axis.max = max;
}

void ChartView::set_y_range(double min, double max)
{
    chart()->axisY()->setRange(min, max);
    m_y_axis.min = min;
    m_y_axis.max = max;
}

void ChartView::show_cursors()
{
    chart()->cursors()->show();
}

void ChartView::hide_cursors()
{
    chart()->cursors()->hide();
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
}

void ChartView::mouseMoveEvent(QMouseEvent *event)
{
    if(m_cursor_moving)
    {
        m_chart->cursors()->update_pos(m_chart, m_series->points().toVector().toStdVector(), event->pos());
    }

    if(m_info_table.is_moving())
    {
        m_info_table.change_pos(event->pos());
    }

    if(m_chart->cursors()->table()->is_moving())
    {
        m_chart->cursors()->table()->change_pos(event->pos());
    }

    QtCharts::QChartView::mouseMoveEvent(event);
}

void ChartView::mousePressEvent(QMouseEvent *event)
{
    m_cursor_moving = true;

    QtCharts::QChartView::mousePressEvent(event);
}

