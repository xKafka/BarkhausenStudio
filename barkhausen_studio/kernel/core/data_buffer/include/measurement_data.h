//
// Created by fkafka on 15. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_DATA_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_DATA_H

#include <deque>

using BufferType = std::vector<std::vector<double>>;

struct MeasurementData
{
    struct Indexes
    {
        unsigned short current, gauss, induced_voltage, barkhausen_noise;
    };

    const unsigned char* raw_data;

    BufferType data;

    Indexes indexes;

    auto &current_data() { return data.at(indexes.current - 1); }

    auto &gauss_data() { return data.at(indexes.gauss - 1); }

    auto &induced_voltage_data() { return data.at(indexes.induced_voltage - 1); }

    auto &barkhausen_data() { return data.at(indexes.barkhausen_noise - 1); }
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_DATA_H
