//
// Created by fkafka on 15. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_DATA_BUFFER_H
#define BARKHAUSEN_STUDIO_DATA_BUFFER_H

#include <QObject>

#include "measurement_data.h"
#include "statistical_data.h"
#include "ui_data.h"

struct DataBuffer
{
    MeasurementData measurement_data;
    StatisticalData statistical_data;
    UiData ui_data;
};

#endif //BARKHAUSEN_STUDIO_DATA_BUFFER_H
