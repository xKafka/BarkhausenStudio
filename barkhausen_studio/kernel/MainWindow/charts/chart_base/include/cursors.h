//
// Created by fkafka on 13. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CURSORS_H
#define BARKHAUSEN_STUDIO_CURSORS_H

#include <QGraphicsLineItem>
#include <QPen>
#include <QGraphicsScene>
#include <QPainter>

#include <QDebug>

enum Cursor
{
    X_1 = 0,
    X_2,
    Y_1,
    Y_2,
    All
};

class Cursors
{
    QGraphicsLineItem m_x_1, m_x_2, m_y_1, m_y_2;

    bool m_mov_x_1, m_mov_x_2, m_mov_y_1, m_mov_y_2;

    bool m_is_visible;

    bool m_is_drown;

    QPointF m_last_pos;

    QGraphicsScene* m_scene;

    void change_pos();

public:
    explicit Cursors(QGraphicsScene *scene);

    void move(Cursor cur);

    void update_pos(const QPointF &pos);

    void draw_cursors(QPainter* painter);

    void redraw();

    void hide();

    void show();

    [[nodiscard]] auto position(Cursor cur) const;
};

#endif //BARKHAUSEN_STUDIO_CURSORS_H