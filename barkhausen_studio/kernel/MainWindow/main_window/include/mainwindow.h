#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <mem_types.h>
#include <iostream>

#include <QMainWindow>

#include <core.h>
#include <mainmenuwindow.h>
#include <data_buffer.h>
#include <QToolButton>
#include <core.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    SharedData<SettingsStorage> m_settings_storage;

    std::unique_ptr<Ui::MainWindow> m_ui;

    std::unique_ptr<Core> m_api_core;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

public slots:
    void process_data();
};
#endif // MAINWINDOW_H
