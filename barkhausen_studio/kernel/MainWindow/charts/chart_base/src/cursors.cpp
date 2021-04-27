//
// Created by fkafka on 13. 4. 2021.
//

#include "../include/cursors.h"

Cursors::Cursors(QGraphicsScene *scene)
    :   m_scene{ scene },
        m_mov_x_1{ false },
        m_mov_x_2{ false },
        m_mov_y_1{ false },
        m_mov_y_2{ false },
        m_is_visible{ false },
        m_is_drown{ false }
{
}

void Cursors::hide()
{
    m_x_1.hide();
    m_x_2.hide();
    m_y_1.hide();
    m_y_2.hide();

    m_is_visible = false;
}

void Cursors::show()
{
    m_x_1.show();
    m_x_2.show();
    m_y_1.show();
    m_y_2.show();

    m_is_visible = true;
}

void Cursors::draw_cursors(QPainter* painter)
{
    if(m_is_drown)
    {
        return;
    }

    const auto geometry = m_scene->sceneRect();

    QPen pen(Qt::red);

    pen.setWidth(1);

    painter->setPen(pen);

    m_x_1.setPen(pen);
    m_x_2.setPen(pen);
    m_y_1.setPen(pen);
    m_y_2.setPen(pen);

    m_x_1.setLine({ geometry.topLeft(), geometry.bottomLeft() });
    m_x_2.setLine({ geometry.topLeft(), geometry.bottomLeft() });
    m_y_1.setLine({ geometry.topLeft(), geometry.topRight() });
    m_y_2.setLine({ geometry.topLeft(), geometry.topRight() });

    m_scene->addItem(&m_x_1);
    m_scene->addItem(&m_x_2);
    m_scene->addItem(&m_y_1);
    m_scene->addItem(&m_y_2);

    m_is_drown = true;
}

void Cursors::redraw()
{
    m_is_drown = false;

    m_scene->removeItem(&m_x_1);
    m_scene->removeItem(&m_x_2);
    m_scene->removeItem(&m_y_1);
    m_scene->removeItem(&m_y_2);
}

void Cursors::change_pos()
{
    if(!m_is_visible)
    {
        return;
    }

    if(m_mov_x_1)
    {
        m_x_1.setX(m_last_pos.x());
    }
    if(m_mov_x_2)
    {
        m_x_2.setX(m_last_pos.x());
    }
    if(m_mov_y_1)
    {
        m_y_1.setY(m_last_pos.y());
    }
    if(m_mov_y_2)
    {
        m_y_2.setY(m_last_pos.y());
    }
}

void Cursors::update_pos(const QPointF &pos)
{
    m_last_pos = pos;

    change_pos();

    m_scene->update();
}

auto Cursors::position(Cursor cur) const
{
    switch (cur)
    {
        case X_1: return m_x_1.pos();

        case X_2: return m_x_2.pos();

        case Y_1: return m_y_1.pos();

        case Y_2: return m_y_2.pos();

        case All: break;
    }

    return QPointF{};
}

void Cursors::move(const Cursor cur)
{
    switch (cur)
    {
        case X_1:   m_mov_x_1 = true;
                    m_mov_x_2 = false;
                    m_mov_y_1 = false;
                    m_mov_y_2 = false;

                    return;

        case X_2:   m_mov_x_1 = false;
                    m_mov_x_2 = true;
                    m_mov_y_1 = false;
                    m_mov_y_2 = false;

                    return;

        case Y_1:   m_mov_x_1 = false;
                    m_mov_x_2 = false;
                    m_mov_y_1 = true;
                    m_mov_y_2 = false;

                    return;

        case Y_2:   m_mov_x_1 = false;
                    m_mov_x_2 = false;
                    m_mov_y_1 = false;
                    m_mov_y_2 = true;

                    return;

        case All: break;
    }
}
