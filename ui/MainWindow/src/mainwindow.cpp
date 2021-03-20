#include <QLineEdit>

#include "include/mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :   QMainWindow(parent),
        m_ui{ std::make_unique<Ui::MainWindow>() },
        m_main_menu{ }
{
    m_ui->setupUi(this);

    m_main_menu.setup("MainWindow", m_ui->centralwidget);

    connect(m_ui->lineEdit_command_line, &QLineEdit::returnPressed, this, [&]()
    {
        send_command(m_ui->lineEdit_command_line->text().toStdString());
    });

    connect(&m_main_menu, &MainMenu::command, this, [&](const std::string &cmd) { send_command(cmd); });

    m_ui->current_chart->show();
}

MainWindow::~MainWindow() = default;

CurrentChart* MainWindow::current_chart() const
{
    return m_ui->current_chart;
}

void MainWindow::send_command(std::string_view new_line)
{
    emit command(new_line.data());
}

void MainWindow::echo_cmd(const Command &cmd)
{
    if(cmd.command_key == "debug")
    {
        std::cout << cmd.args.front();
    }
}

void MainWindow::dump(std::string_view what_to_show)
{
    std::cout << what_to_show;
}

void MainWindow::do_magic(const Command &what_to_do)
{
    if(what_to_do.key == "echo")
    {
        echo_cmd(what_to_do);
    }
    else if(what_to_do.key == "current_sensor")
    {

    }
}




