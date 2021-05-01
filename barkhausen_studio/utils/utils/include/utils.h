//
// Created by fkafka on 28. 2. 2021.
//

#ifndef BARKHAUSEN_STUDIO_UTILS_H
#define BARKHAUSEN_STUDIO_UTILS_H

#include <string>
#include <QDir>
#include <cmath>
#include <sstream>
#include <type_traits>

namespace Utility
{
    namespace FileSystem
    {
        inline std::string current_path()
        {
            return QDir::currentPath().toStdString();
        }
    }

    namespace Cast
    {
        //!Big values are not implemented ... but this is enough for my purpose
        template<typename CastType, typename = std::enable_if<std::is_arithmetic_v<CastType>>>
        inline CastType num_cast(const std::string &arg)
        {
            if constexpr(std::is_floating_point_v<CastType>)
            {
                return std::stof(arg);
            }
            else if constexpr(std::is_integral_v<CastType>)
            {
                return std::stoi(arg);
            }
        }

        template<typename Type, typename = std::enable_if<std::is_arithmetic_v<Type>>>
        inline std::string to_string(const Type val)
        {
            std::stringstream out;

            out << val;

            return out.str();
        }
    }

    namespace Comparator
    {
        template<typename Type, typename = std::enable_if<std::is_floating_point_v<Type>>>
        inline auto epsilon_eq(const Type left, const Type right)
        {
            constexpr auto epsilon { std::numeric_limits<Type>::epsilon() };

            return (std::fabs(left) < std::fabs(right) ? std::fabs(right) : std::fabs(left)) * epsilon;
        }

        template<typename Type, typename = std::enable_if<std::is_floating_point_v<Type>>>
        inline bool approximately_equal(const Type left, const Type right)
        {
            return std::fabs(left - right) <= epsilon_eq(left, right);
        }

        template<typename Type, typename = std::enable_if<std::is_floating_point_v<Type>>>
        bool greater_than(const Type left, const Type right)
        {
            return (left - right) > epsilon_eq(left, right);
        }

        template<typename Type, typename = std::enable_if<std::is_floating_point_v<Type>>>
        bool less_than(const Type left, const Type right)
        {
            return (right - left) > epsilon_eq(left, right);
        }
    }

    namespace Parser
    {
        inline std::pair<std::string, std::string> parse_key_value_with_eq_sign(std::string_view from)
        {
            const auto found = std::find_if(from.begin(), from.end(), [](const char val){ return val == '='; });

            std::string key(from.data(), std::distance(from.begin(), found));

            std::string value(found + 1, std::distance(found, from.end()));

            return { key, value };
        }
    }
}

#endif //BARKHAUSEN_STUDIO_UTILS_H
