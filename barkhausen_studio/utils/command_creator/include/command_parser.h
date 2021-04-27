//
// Created by fkafka on 22. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_COMMAND_PARSER_H
#define BARKHAUSEN_STUDIO_COMMAND_PARSER_H

#include <cctype>
#include <iostream>

#include "parsed_command.h"
#include "command_creator.h"

namespace CommandParser
{
    inline ParsedCommand parse_command(const std::vector<uint8_t> &json_data)
    {
        ParsedCommand out;
        const auto parsed_json = nlohmann::json::from_msgpack(json_data);

        out.sender = parsed_json["sender"];
        out.module = parsed_json["module"];
        out.command = parsed_json["command"];
        out.key = parsed_json["key"];
        out.args = parsed_json["args"].get<std::vector<std::string>>();

        return out;
    }
};

#endif //BARKHAUSEN_STUDIO_COMMAND_PARSER_H
