//
// Created by fkafka on 11. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_AGILENT_U2541A_H
#define BARKHAUSEN_STUDIO_AGILENT_U2541A_H

#include <memory>
#include <agilent_u2541a_wrapped.h>

class AgilentU2541a
{
    PyObject* m_device;

    PyObject* create_pyobject(const std::string &resource)
    {
        Py_Initialize();
        initagilent_u2541a_wrapped();

        return create_usbtmc_agilent(resource.data());
    }

public:
    AgilentU2541a() = default;

    AgilentU2541a &operator=(AgilentU2541a &&) = default;

    ~AgilentU2541a() { Py_Finalize(); delete m_device; }

    void init_agilent(const std::string &resource)
    {
        m_device = create_pyobject(resource);

        if(m_device == NULL)
        {
            Py_Finalize();
        }
    }

    [[nodiscard]] bool is_open() const
    {
        return m_device != NULL;
    }

    [[nodiscard]] std::string name() const
    {
        return check_identity(m_device);
    }

    void send_message(std::string msg)
    {
        send_msg(m_device, msg.data());
    }

    [[nodiscard]] char* get_one_sample() const
    {
        return one_sample(m_device);
    }

    std::string ask_device(const std::string &what)
    {
        return ask(m_device, what.data());
    }

    void wait_for_data_ready()
    {
        wait_for_data(m_device);
    }

    void reset()
    {
        reset_device(m_device);
    }

    [[nodiscard]] char* read() const
    {
        return read_raw(m_device);
    }
};



#endif //BARKHAUSEN_STUDIO_AGILENT_U2541A_H
