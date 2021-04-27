//
// Created by fkafka on 24. 2. 2021.
//

#ifndef BARKHAUSEN_STUDIO_PARSED_COMMAND_H
#define BARKHAUSEN_STUDIO_PARSED_COMMAND_H

#include <string>
#include <QMetaType>
#include <sstream>

struct ParsedCommand
{
    using Arg = std::string;
    using Args = std::vector<Arg>;

    Arg sender{};
    Arg module{};
    Arg command{};
    Arg key{};
    Args args{};

    ParsedCommand() = default;

    [[nodiscard]] std::string dump() const
    {
        std::stringstream out;

        out << "Command { " << command
            << " } Module { " << module
            << " } Sender { " << sender
            << " } Key { " << key
            << " } Arguments {";

        for(const auto &arg : args)
        {
            out << " \"" << arg << " \"";
        }

        out << '}';

        return out.str();
    }
};

Q_DECLARE_METATYPE(ParsedCommand)

#endif //BARKHAUSEN_STUDIO_PARSED_COMMAND_H
