//
// Created by fkafka on 30. 3. 2021.
//

#include <data_parser.h>
#include <string_view>
#include <cstdlib>

//data going in using format { "#800000000<first_channel_lsb><first_channel_msb><second_channel_lsb><..." };

constexpr std::string_view starting_sequence { "#800000000" };

std::size_t get_data_size(const unsigned char* data)
{
    const auto data_signed = reinterpret_cast<const char*>(data);

    std::string_view ret_val(data_signed + 2, starting_sequence.size() - 2);

    return static_cast<std::size_t>(std::atoi(ret_val.data()));
}

BufferType DataParser::parse_data(const unsigned char *data)
{
    //!!!!! only Bipolar is implemented .... Unipolar should be implemented as well

    auto to_double = [](const unsigned char lsb, const unsigned char msb)
    {
        constexpr auto int_max_val = 1 << 16;

        const short value = lsb | msb << 8;

        return (static_cast<double>(2 * value) / int_max_val) * 10.0;
    };

    const std::size_t data_size_in_bytes = get_data_size(data);

    BufferType ret_val(4);

    for(std::size_t index = starting_sequence.size(); index < data_size_in_bytes; index += 8)
    {
        auto *data_at_index = data + index;

        ret_val.at(0).push_back(to_double(data_at_index[0], data_at_index[1]));

        ret_val.at(1).push_back(to_double(data_at_index[2], data_at_index[3]));

        ret_val.at(2).push_back(to_double(data_at_index[4], data_at_index[5]));

        ret_val.at(3).push_back(to_double(data_at_index[6], data_at_index[7]));
    }

    return ret_val;
}