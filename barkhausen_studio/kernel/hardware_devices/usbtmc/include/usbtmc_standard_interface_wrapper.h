//
// Created by fkafka on 11. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_AGILENT_U2541A_H
#define BARKHAUSEN_STUDIO_AGILENT_U2541A_H

#include <string_view>
#include "usbtmc_standard_interface_python.h"

class UsbtmcStandardInterfaceWrapper
{
    PyObject* m_device;

    PyObject* create_pyobject(std::string_view resource)
    {
        Py_Initialize();
        initusbtmc_standard_interface_python();

        return create_usbtmc_agilent(resource.data());
    }

public:
    UsbtmcStandardInterfaceWrapper() = default;

    UsbtmcStandardInterfaceWrapper &operator=(UsbtmcStandardInterfaceWrapper &&) = default;

    ~UsbtmcStandardInterfaceWrapper() { Py_DecRef(m_device); Py_Finalize(); }

    bool init_usbtmc(std::string_view resource)
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
        }
    }
};



#endif //BARKHAUSEN_STUDIO_AGILENT_U2541A_H
