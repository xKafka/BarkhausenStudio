//
// Created by fkafka on 15. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_UI_DATA_H
#define BARKHAUSEN_STUDIO_UI_DATA_H

#include <QList>
#include <QPointF>

struct UiData
{
    QList<QPointF> barkhausen_ui_data;
    QList<QPointF> B_H_ui_data;
    QList<QPointF> hysteresis_data;
};

#endif //BARKHAUSEN_STUDIO_UI_DATA_H
