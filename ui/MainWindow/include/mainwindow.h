#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <memory>
#include <iostream>

#include <qt5/QtWidgets/QMainWindow>

#include <command.h>
#include <currentchart.h>

#include <main_menu.h>
#include <acquisition_menu.h>

#include <QToolButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    std::unique_ptr<Ui::MainWindow> m_ui;

    MainMenu m_main_menu;

    void send_command(std::string_view new_line);

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    static constexpr std::string_view name() { return "main_window"; }

    [[nodiscard]] CurrentChart* current_chart() const;

public slots:
    void do_magic(const Command &what_to_do);

    void dump(std::string_view what_to_show);

    void echo_cmd(const Command &cmd);


signals:
    void command(const std::string &);
};
#endif // MAINWINDOW_H
