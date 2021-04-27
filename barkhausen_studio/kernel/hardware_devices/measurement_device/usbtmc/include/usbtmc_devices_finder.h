//
// Created by fkafka on 27. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_USBTMC_DEVICES_FINDER_H
#define BARKHAUSEN_STUDIO_USBTMC_DEVICES_FINDER_H

#include <agilent_u2541a_python.h>

namespace UsbtmcDevicesFinder
{
    inline std::string find_available_devices()
    {
        return check_available_devices();
    }
}

#endif //BARKHAUSEN_STUDIO_USBTMC_DEVICES_FINDER_H
