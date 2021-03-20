//
// Created by fkafka on 18. 3. 2021.
//
#include <QApplication>

#include <main_menu.h>

MainMenu::MainMenu()
{}

void MainMenu::setup(const std::string &parent_name, QWidget *central_widget)
{
    m_acq_menu.setup(parent_name, central_widget);

    m_acq_menu.hide();

    m_acquisition = new QPushButton(central_widget);
    m_chart = new QPushButton(central_widget);

    m_acquisition->setObjectName(QString::fromUtf8("push_button_main_menu_acquisition"));
    m_acquisition->setEnabled(true);
    m_acquisition->setGeometry(QRect(1030, 20, 131, 121));

    m_chart->setObjectName(QString::fromUtf8("push_button_main_menu_chart"));
    m_chart->setEnabled(true);
    m_chart->setGeometry(QRect(1030, 150, 131, 121));

    m_acquisition->setText(QApplication::translate(parent_name.data(), "Acquisition", nullptr));
    m_chart->setText(QApplication::translate(parent_name.data(), "Chart", nullptr));

    connect(&m_acq_menu, &AcquisitionMenu::command, this, [&](const std::string &cmd){
        if(cmd == "show_prev")
        {
            show();

            return;
        }

        emit command(cmd);
    });

    connect(m_acquisition, &QPushButton::clicked, this, [&]()
    {
        is_acq_clicked();
    });

    connect(m_chart, &QPushButton::clicked, this, [&]()
    {
        is_chart_clicked();
    });
}

void MainMenu::is_acq_clicked()
{
    hide();
    m_acq_menu.show();
}

void MainMenu::is_chart_clicked()
{

}

void MainMenu::hide()
{
    m_acquisition->hide();
    m_chart->hide();
}
void MainMenu::show()
{
    m_acquisition->show();
    m_chart->show();
}

