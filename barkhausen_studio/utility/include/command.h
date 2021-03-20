//
// Created by fkafka on 24. 2. 2021.
//

#ifndef BARKHAUSEN_STUDIO_COMMAND_H
#define BARKHAUSEN_STUDIO_COMMAND_H

#include <string>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <QMetaType>

#include <iostream>

struct Command
{
    using Arg = std::string;
    using Args = std::vector<Arg>;

    Arg module{};
    Arg key{};
    Arg command_key{};
    Args args{};

public:
    Command() = default;

    friend std::ostream &operator<<(std::ostream &out, const Command& cmd)
    {
        out << fmt::format("Module {} Keys {} Command_key {} Arguments {}\n", cmd.module, cmd.key, cmd.command_key, cmd.args);

        return out;
    }
};

Q_DECLARE_METATYPE(Command)

#endif //BARKHAUSEN_STUDIO_COMMAND_H
