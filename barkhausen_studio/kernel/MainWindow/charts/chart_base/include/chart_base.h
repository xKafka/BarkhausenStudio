//
// Created by fkafka on 1. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CHART_BASE_H
#define BARKHAUSEN_STUDIO_CHART_BASE_H

#include <QtWidgets/QWidget>
#include <QtCharts/QChartGlobal>
#include <QtCharts/QChart>
#include <QtCharts/QtCharts>
#include <QGraphicsSceneEvent>
#include <memory>
#include <QApplication>

#include "cursors.h"

#include <QDebug>

class ChartBase : public QtCharts::QChart
{
    Cursors m_cursors;

public:
    ChartBase(QGraphicsScene *scene, QGraphicsItem *parent = nullptr, Qt::WindowFlags wFlags = Qt::WindowFlags())
        :   QtCharts::QChart{ parent, wFlags },
            m_cursors{ scene }
    {

    }

    inline auto *cursors() { return &m_cursors; }

    ~ChartBase() override {}
};

#endif //BARKHAUSEN_STUDIO_CHART_BASE_H
