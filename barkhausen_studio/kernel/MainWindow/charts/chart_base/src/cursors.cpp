//
// Created by fkafka on 13. 4. 2021.
//

#include "../include/cursors.h"
#include <utils.h>

Cursors::Cursors(QGraphicsScene *scene)
    :   m_scene{ scene },
        m_A_moving{ false },
        m_B_moving{ false },
        m_horizontal{ false },
        m_vertical{ false },
        m_is_visible{ false },
        m_is_drown{ false },
        m_info{ },
        m_after_resize{ },
        m_before_resize{ },
        m_pen_A{ Qt::red },
        m_pen_B{ Qt::green }
{
    m_pen_A.setWidth(1);
    m_pen_B.setWidth(1);

    m_A_ver.setPen(m_pen_A);
    m_A_hor.setPen(m_pen_A);
    m_B_ver.setPen(m_pen_B);
    m_B_hor.setPen(m_pen_B);

    m_A_ver.setZValue(std::numeric_limits<qreal>::max());
    m_A_hor.setZValue(std::numeric_limits<qreal>::max());
    m_B_ver.setZValue(std::numeric_limits<qreal>::max());
    m_B_hor.setZValue(std::numeric_limits<qreal>::max());

    m_scene->addItem(&m_A_ver);
    m_scene->addItem(&m_A_hor);
    m_scene->addItem(&m_B_ver);
    m_scene->addItem(&m_B_hor);
    m_scene->addItem(&m_info);

    m_info.show_overridden();
}

void Cursors::set_horizontal()
{
    m_horizontal = true;
    m_vertical = false;
}

void Cursors::set_vertical()
{
    m_horizontal = false;
    m_vertical = true;
}

void Cursors::set_moving_A()
{
    m_A_moving = true;
    m_B_moving = false;
}

void Cursors::set_moving_B()
{
    m_A_moving = false;
    m_B_moving = true;
}

void Cursors::hide()
{
    m_A_ver.hide();
    m_A_hor.hide();
    m_B_ver.hide();
    m_B_hor.hide();
    m_info.hide_overridden();

    m_is_visible = false;
}

void Cursors::show()
{
    m_A_ver.show();
    m_A_hor.show();
    m_B_ver.show();
    m_B_hor.show();
    m_info.show_overridden();

    m_is_visible = true;
}

void Cursors::move_horizontal_cursor(QtCharts::QChart *on_chart, const std::vector<QPointF> &chart_points, const QPointF &mouse_position)
{
    auto comparator_x = [](const QPointF &left, const QPointF &right)
    {
        return left.x() < right.x();
    };

    const auto mapped_val = on_chart->mapToValue(mouse_position);

    const auto &vertical_cursor_with_points = std::lower_bound(chart_points.begin(), chart_points.end(), mapped_val, comparator_x);

    const auto &horizontal_position = on_chart->mapToPosition(*vertical_cursor_with_points.base());

    if(m_A_moving)
    {
        m_A_cursor_data = *vertical_cursor_with_points.base();

        m_A_ver.setX(horizontal_position.x());
        m_A_hor.setY(horizontal_position.y());

        m_info.change_val("A_x", Utility::Cast::to_string(m_A_cursor_data.x()));
        m_info.change_val("A_y", Utility::Cast::to_string(m_A_cursor_data.y()));
    }
    if(m_B_moving)
    {
        m_B_cursor_data = *vertical_cursor_with_points.base();

        m_B_ver.setX(horizontal_position.x());
        m_B_hor.setY(horizontal_position.y());

        m_info.change_val("B_x", Utility::Cast::to_string(m_B_cursor_data.x()));
        m_info.change_val("B_y", Utility::Cast::to_string(m_B_cursor_data.y()));
    }

    m_info.change_val("dX", Utility::Cast::to_string(m_B_cursor_data.x() - m_A_cursor_data.x()));

    m_info.change_val("dY", Utility::Cast::to_string(m_B_cursor_data.y() - m_A_cursor_data.y()));
}

void Cursors::move_vertical_cursor(QtCharts::QChart *on_chart, const QPointF &mouse_position)
{
    const auto mapped_val = on_chart->mapToValue(mouse_position);

    if(m_A_moving)
    {
        m_A_hor.setY(mouse_position.y());

        m_A_cursor_data = mapped_val;
    }
    if(m_B_moving)
    {
        m_B_hor.setY(mouse_position.y());

        m_B_cursor_data = mapped_val;
    }

    m_info.change_val("dX", "NaN");

    m_info.change_val("dY", Utility::Cast::to_string(m_B_cursor_data.y() - m_A_cursor_data.y()));
}

void Cursors::update_pos(QtCharts::QChart *on_chart, const std::vector<QPointF> &shown_data, const QPointF &mouse_pos)
{
    if(m_horizontal)
    {
        move_horizontal_cursor(on_chart, shown_data, mouse_pos);
    }
    if(m_vertical)
    {
        move_vertical_cursor(on_chart, mouse_pos);
    }
}

void Cursors::set_resize_factor(const QRect &geo)
{
    m_after_resize.A_ver = { geo.topLeft(), geo.bottomLeft() };
    m_after_resize.A_hor = { geo.topLeft(), geo.topRight() };
    m_after_resize.B_ver = { geo.topLeft(), geo.bottomLeft() };
    m_after_resize.B_hor = { geo.topLeft(), geo.topRight() };
}

void Cursors::resize_to_big()
{
    m_A_ver.setLine(m_after_resize.A_ver);
    m_A_hor.setLine(m_after_resize.A_hor);
    m_B_ver.setLine(m_after_resize.B_ver);
    m_B_hor.setLine(m_after_resize.B_hor);
}

void Cursors::resize_to_small()
{
    m_A_ver.setLine(m_before_resize.A_ver);
    m_A_hor.setLine(m_before_resize.A_hor);
    m_B_ver.setLine(m_before_resize.B_ver);
    m_B_hor.setLine(m_before_resize.B_hor);
}

void Cursors::draw_cursors(QPainter* painter)
{
    if(m_is_drown)
    {
        return;
    }

    const auto geometry = m_scene->sceneRect();

    painter->setPen(m_pen_A);

    m_before_resize.A_ver = { geometry.topLeft(), geometry.bottomLeft() };
    m_before_resize.A_hor = { geometry.topLeft(), geometry.topRight() };

    m_A_ver.setLine(m_before_resize.A_ver);
    m_A_hor.setLine(m_before_resize.A_hor);

    painter->setPen(m_pen_B);

    m_before_resize.B_ver = { geometry.topLeft(), geometry.bottomLeft() };
    m_before_resize.B_hor = { geometry.topLeft(), geometry.topRight() };

    m_B_ver.setLine(m_before_resize.B_ver);
    m_B_hor.setLine(m_before_resize.B_hor);

    m_info.create_text_field({
                                     {"A_x", "A_x: " },
                                     {"A_y", "A_y: " },
                                     {"B_x", "B_x: " },
                                     {"B_y", "B_y: " },
                                     {"dX", "dX: " },
                                     {"dY", "dY: " }
                             });

    m_info.hide_overridden();

    m_info.change_pos(m_scene->sceneRect().center().toPoint());

    m_is_drown = true;
}