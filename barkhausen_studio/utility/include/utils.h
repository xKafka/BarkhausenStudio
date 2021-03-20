//
// Created by fkafka on 28. 2. 2021.
//

#ifndef BARKHAUSEN_STUDIO_UTILS_H
#define BARKHAUSEN_STUDIO_UTILS_H

#include <string_view>

namespace utils
{
    namespace parser
    {
        inline std::pair<std::string, std::string> parse_key_value_with_eq_sign(std::string_view from)
        {
            const auto found = std::find_if(from.begin(), from.end(), [](const char val){ return val == '='; });

            std::string key(from.data(), std::distance(from.begin(), found));

            std::string value(found + 1, std::distance(found, from.end()));

            return { key, value };
        }
    }

    namespace file_system
    {
        inline std::string current_path()
        {
            auto current_path = std::filesystem::current_path();

            return current_path.string();
        }
    }
}

#endif //BARKHAUSEN_STUDIO_UTILS_H
