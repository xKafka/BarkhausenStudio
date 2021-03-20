//
// Created by fkafka on 20. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_COMMAND_CREATOR_H
#define BARKHAUSEN_STUDIO_COMMAND_CREATOR_H

#include <cctype>
#include <iostream>
#include <command.h>

constexpr const auto arg_start_stop_sign { '\"' };
constexpr const auto segment_start { '{' };
constexpr const auto segment_stop { '}' };

namespace CommandCreator
{
    using char_itr = std::string_view::iterator;

    inline char_itr find_char(std::string_view in, const char what)
    {
        return std::find_if(in.begin(), in.end(), [what](const auto &c){ return c == what; });
    }

    inline constexpr std::string_view create_view(const char* begin, const char* end)
    {
        std::string_view ret_val(begin, end - begin);

        return ret_val;
    }

    inline Command::Args split_string(std::string_view from)
    {
        auto begin = from.begin();

        Command::Args ret_val;

        while(begin != from.end())
        {
            auto arg_begin = find_char( create_view(begin, from.end()) , arg_start_stop_sign);

            if(arg_begin == from.end())
                break;

            auto arg_end = find_char(create_view(arg_begin + 1, from.end()), arg_start_stop_sign);

            if(arg_end == from.end())
                break;

            ret_val.push_back({ arg_begin + 1, arg_end });

            begin = arg_end + 1;
        }

        return ret_val;
    }

    inline Command::Arg separate_single_module(std::string_view from)
    {
        auto arg_begin = find_char(from, arg_start_stop_sign);

        return { arg_begin + 1, find_char(create_view(arg_begin + 1, from.end()), arg_start_stop_sign) };
    }

    inline Command parse_cmd(std::string_view from)
    {
        Command ret_val;

        auto module_start = find_char(from, segment_start);
        auto module_stop = find_char(module_start, segment_stop);

        ret_val.module = separate_single_module(create_view(module_start, module_stop));

        auto key_start = find_char(module_stop, segment_start);
        auto key_stop = find_char(key_start, segment_stop);

        ret_val.key = separate_single_module(create_view(key_start, key_stop));

        auto command_key_start = find_char(key_stop, segment_start);
        auto command_key_stop = find_char(command_key_start, segment_stop);

        ret_val.command_key = separate_single_module(create_view(command_key_start, command_key_stop));

        auto args_start = find_char(command_key_stop, segment_start);
        auto args_stop = find_char(args_start, segment_stop);

        ret_val.args = split_string(create_view(args_start, args_stop));

        return ret_val;
    }
};


#endif //BARKHAUSEN_STUDIO_COMMAND_CREATOR_H
