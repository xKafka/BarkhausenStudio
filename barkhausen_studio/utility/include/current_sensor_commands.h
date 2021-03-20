//
// Created by fkafka on 20. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CURRENT_SENSOR_COMMANDS_H
#define BARKHAUSEN_STUDIO_CURRENT_SENSOR_COMMANDS_H

namespace Modules
{
    constexpr const std::string_view main_window{"{ \"main_window\" } "};
}
namespace Commands
{
    namespace MainWindow
    {
        constexpr const std::string_view echo{"{ \"echo\" } "}

        namespace Echo
        {
            constexpr const std::string_view debug{"{ \"debug\" } "}
        }
    }
}

namespace Modules {
    constexpr const std::string_view current_sensor{"{ \"current_sensor\" } "};

    namespace CurrentSensor
    {
        constexpr const std::string_view read{"{ \"read\" } "};

        constexpr const std::string_view change{"{ \"change\" } "};

        constexpr const std::string_view open{"{ \"open\" } "};

        constexpr const std::string_view write{"{ \"write\" } "};

        constexpr const std::string_view close{"{ \"close\" } "};

        constexpr const std::string_view acquisition{"{ \"acquisition\" } "};

        namespace Read
        {

        }
        namespace Change
        {

        }
        namespace Open
        {

        }
        namespace Write
        {

        }
        namespace Close
        {

        }
        namespace Acquisition
        {

        }
    }
}


#endif //BARKHAUSEN_STUDIO_CURRENT_SENSOR_COMMANDS_H
