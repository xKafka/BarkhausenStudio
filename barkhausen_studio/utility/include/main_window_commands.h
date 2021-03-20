//
// Created by fkafka on 20. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MAIN_WINDOW_COMMANDS_H
#define BARKHAUSEN_STUDIO_MAIN_WINDOW_COMMANDS_H

#include <string_view>

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

#endif //BARKHAUSEN_STUDIO_MAIN_WINDOW_COMMANDS_H
