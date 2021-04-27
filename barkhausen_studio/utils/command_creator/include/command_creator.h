//
// Created by fkafka on 20. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_COMMAND_CREATOR_H
#define BARKHAUSEN_STUDIO_COMMAND_CREATOR_H

#include <cctype>
#include <sstream>
#include <nlohmann/json.hpp>
#include "parsed_command.h"

namespace CommandCreator
{
    using Args_t = std::initializer_list<std::string_view>;

    inline auto create_command(
                                std::string_view sender,
                                std::string_view module,
                                std::string_view command,
                                std::string_view key,
                                const Args_t args)
    {
        nlohmann::json out;

        out["sender"] = sender;
        out["module"] = module;
        out["command"] = command;
        out["key"] = key;
        out["args"] = args;

        return nlohmann::json::to_msgpack(out);
    }
}

#endif //BARKHAUSEN_STUDIO_COMMAND_CREATOR_H
