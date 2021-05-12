//
// Created by fkafka on 13. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CURSORS_H
#define BARKHAUSEN_STUDIO_CURSORS_H

#include <QGraphicsLineItem>
#include <QPen>
#include <QGraphicsScene>
#include <QPainter>
#include <info_table.h>
#include <QDebug>
#include <QtCharts/QChart>

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
    struct CursorLines
    {
        QLineF A_hor, A_ver, B_hor, B_ver;
    };

    CursorLines m_after_resize, m_before_resize;

    QGraphicsLineItem m_A_hor, m_A_ver, m_B_hor, m_B_ver;

    InfoTable m_info;

    bool m_A_moving, m_B_moving;

    bool m_horizontal, m_vertical;

    bool m_is_visible;

    bool m_is_drown;

    QPointF m_A_cursor_data, m_B_cursor_data;

    QPen m_pen_A, m_pen_B;

    QGraphicsScene* m_scene;

    void move_horizontal_cursor(QtCharts::QChart *on_chart, const std::vector<QPointF> &chart_points, const QPointF &mouse_position);

    void move_vertical_cursor(QtCharts::QChart *on_chart, const QPointF &mouse_position);

public:
    explicit Cursors(QGraphicsScene *scene);

    void set_horizontal();

    void set_vertical();

    void set_moving_A();

    void set_moving_B();

    void update_pos(QtCharts::QChart *on_chart, const std::vector<QPointF> &shown_data, const QPointF &mouse_pos);

    void draw_cursors(QPainter* painter);

    void set_resize_factor(const QRect &geo);

    void hide();

    void resize_to_big();

    void resize_to_small();

    void show();

    auto *table() { return &m_info; }

    bool is_visible() const { return m_is_visible; }

    inline bool is_horizontal() const { return m_horizontal; }

    inline bool is_vertical() const { return m_vertical; }

    inline bool is_moving_A() const { return m_A_moving; }

    inline bool is_moving_B() const { return m_B_moving; }
};

#endif //BARKHAUSEN_STUDIO_CURSORS_H