//
// Created by fkafka on 4. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_STATE_CHANGING_DIAL_H
#define BARKHAUSEN_STUDIO_STATE_CHANGING_DIAL_H

#include <QDial>
#include <array>

class StateChangingDial : public QDial
{
    Q_OBJECT

public:
    enum State
    {
        x0_1 = 0,
        x1,
        x10,
        Size
    };

private:
    void change_state()
    {
        ++m_state;

        if(m_state == State::Size)
        {
            m_state = State::x0_1;
        }
    }

public:
    explicit StateChangingDial(QWidget *parent = nullptr)
        :   QDial{ parent },
            m_state{ State::x0_1 }
    {

    }

    auto state() const { return static_cast<State>(m_state); }

protected:
    int m_state;

    void mouseDoubleClickEvent(QMouseEvent *event) override
    {
        change_state();

        emit state_changed();

        QDial::mouseDoubleClickEvent(event);
    }

signals:
    void state_changed();
};

#endif //BARKHAUSEN_STUDIO_STATE_CHANGING_DIAL_H
