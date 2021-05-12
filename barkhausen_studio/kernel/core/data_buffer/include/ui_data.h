//
// Created by fkafka on 15. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_UI_DATA_H
#define BARKHAUSEN_STUDIO_UI_DATA_H

#include <QVector>
#include <QPointF>

struct UiData
{
    QVector<QPointF> barkhausen_ui_data;
    std::size_t barkhausen_ui_data_size{ 0 };
    QVector<QPointF> B_H_ui_data;
    std::size_t B_H_ui_data_size{ 0 };
    QVector<QPointF> hysteresis_data;
    std::size_t hysteresis_data_size{ 0 };
};

#endif //BARKHAUSEN_STUDIO_UI_DATA_H
