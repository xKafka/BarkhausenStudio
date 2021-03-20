//
// Created by fkafka on 18. 3. 2021.
//
#include <QApplication>

#include <acquisition_menu.h>

AcquisitionMenu::AcquisitionMenu()
{}

void AcquisitionMenu::setup(const std::string &parent_name, QWidget *central_widget)
{
    m_settings_menu.hide();

    m_single_shot= new QPushButton(central_widget);
    m_start = new QPushButton(central_widget);
    m_stop = new QPushButton(central_widget);
    m_settings = new QPushButton(central_widget);
    m_back = new QPushButton(central_widget);

    m_single_shot->setObjectName(QString::fromUtf8("push_button_acquisition_menu_single_shot"));
    m_single_shot->setEnabled(true);
    m_single_shot->setGeometry(QRect(1030, 20, 131, 121));

    m_start->setObjectName(QString::fromUtf8("push_button_acquisition_menu_start"));
    m_start->setEnabled(true);
    m_start->setGeometry(QRect(1030, 150, 131, 121));

    m_stop->setObjectName(QString::fromUtf8("push_button_acquisition_menu_stop"));
    m_stop->setEnabled(true);
    m_stop->setGeometry(QRect(1030, 280, 131, 121));

    m_settings->setObjectName(QString::fromUtf8("push_button_acquisition_menu_settings"));
    m_settings->setEnabled(true);
    m_settings->setGeometry(QRect(1030, 410, 131, 121));

    m_back->setObjectName(QString::fromUtf8("push_button_acquisition_back"));
    m_back->setEnabled(true);
    m_back->setGeometry(QRect(1030, 540, 131, 121));

    m_single_shot->setText(QApplication::translate(parent_name.data(), "Single shot", nullptr));
    m_start->setText(QApplication::translate(parent_name.data(), "Start", nullptr));
    m_stop->setText(QApplication::translate(parent_name.data(), "Stop", nullptr));
    m_settings->setText(QApplication::translate(parent_name.data(), "Settings", nullptr));
    m_back->setText(QApplication::translate(parent_name.data(), "...", nullptr));

    acquisition_running(false);

    connect(&m_settings_menu, &AcquisitionSettingsMenu::command, this, [&](const std::string &cmd)
    {
        if(cmd == "show_prev")
        {
            show();

            return;
        }

        emit command(cmd);
    });

    connect(m_single_shot, &QPushButton::clicked, this, [&]()
    {
        is_single_shot_clicked();
    });

    connect(m_start, &QPushButton::clicked, this, [&]()
    {
        is_start_clicked();
    });

    connect(m_stop, &QPushButton::clicked, this, [&]()
    {
        is_stop_clicked();
    });

    connect(m_settings, &QPushButton::clicked, this, [&]()
    {
        is_settings_clicked();
    });

    connect(m_back, &QPushButton::clicked, this, [&]()
    {
        is_back_clicked();
    });
}

void AcquisitionMenu::is_single_shot_clicked()
{
    emit command("{\"current_sensor\"} {\"open\"} {\"port\"}");

    emit command("{\"current_sensor\"} {\"acquisition\"} {\"preset\"}");

    emit command("{\"current_sensor\"} {\"acquisition\"} {\"single\"}");
}

void AcquisitionMenu::is_start_clicked()
{
    emit command("{\"current_sensor\"} {\"open\"} {\"port\"}");

    emit command("{\"current_sensor\"} {\"acquisition\"} {\"single\"}");

    emit command("{\"current_sensor\"} {\"open\"} {\"port\"}");

    emit command("{\"current_sensor\"} {\"acquisition\"} {\"preset\"}");

    emit command("{\"current_sensor\"} {\"acquisition\"} {\"continuous\"} {\"start\"}");

    acquisition_running(true);
}

void AcquisitionMenu::is_stop_clicked()
{
    emit command("{\"current_sensor\"} {\"acquisition\"} {\"continuous\"} {\"stop\"}");

    acquisition_running(false);
}

void AcquisitionMenu::is_settings_clicked()
{
    hide();
    m_settings_menu.show();
}

void AcquisitionMenu::is_back_clicked()
{
    hide();
    m_settings_menu.hide();

    emit command("show_prev");
}

void AcquisitionMenu::acquisition_running(bool running)
{
    m_start->setEnabled(!running);
    m_stop->setEnabled(running);
}

void AcquisitionMenu::hide()
{
    m_single_shot->hide();
    m_start->hide();
    m_stop->hide();
    m_settings->hide();
    m_back->hide();
}
void AcquisitionMenu::show()
{
    m_single_shot->show();
    m_start->show();
    m_stop->show();
    m_settings->show();
    m_back->show();
}