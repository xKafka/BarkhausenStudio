//
// Created by fkafka on 11. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_AGILENT_U2541A_H
#define BARKHAUSEN_STUDIO_AGILENT_U2541A_H

#include <string_view>
#include "agilent_u2541a_python.h"

class AgilentU2541aWrapper
{
    PyObject* m_device;

    PyObject* create_pyobject(std::string_view resource)
    {
        Py_Initialize();
        initagilent_u2541a_python();

        return create_usbtmc_agilent(resource.data());
    }

public:
    AgilentU2541aWrapper() = default;

    AgilentU2541aWrapper &operator=(AgilentU2541aWrapper &&) = default;

    ~AgilentU2541aWrapper() { Py_DecRef(m_device); Py_Finalize(); }

    bool init_agilent(std::string_view resource)
    {
        m_device = create_pyobject(resource);

        if(m_device == NULL)
        {
            Py_Finalize();

            return false;
        }
        else
            return true;
    }

    void set_data_len(std::string_view size)
    {
        set_data_size(m_device, size.data());
    }

    [[nodiscard]] bool is_open() const
    {
        return m_device != NULL;
    }

    [[nodiscard]] std::string name() const
    {
        return check_identity(m_device);
    }

    void send_message(std::string_view msg)
    {
        send_msg(m_device, msg.data());
    }

    std::size_t last_data_len() const
    {
        return last_data_size(m_device);
    }

    [[nodiscard]] char* get_one_sample() const
    {
        char* ret_val;

        try
        {
            ret_val = one_sample(m_device);
        }
        catch(...)
        {

        }

        return ret_val;
    }

    std::string ask_device(std::string_view what)
    {
        return ask(m_device, what.data());
    }

    void wait_for_data_ready()
    {
        try
        {
            wait_for_data(m_device);

            PyErr_Print();
        }
        catch(...)
        {
            auto i = 50;

        }
    }

    void reset()
    {
        reset_device(m_device);
    }

    [[nodiscard]] char* read() const
    {
        char* ret_val;

        try
        {
            ret_val = read_raw(m_device);
        }
        catch(...)
        {
            auto i = 50;

        }
    }
};



#endif //BARKHAUSEN_STUDIO_AGILENT_U2541A_H
