//
// Created by fkafka on 18. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MAINMENU_H
#define BARKHAUSEN_STUDIO_MAINMENU_H

#include <QPushButton>
#include <QWidget>
#include <QObject>
#include <command.h>
#include <acquisition_menu.h>

class MainMenu : public QObject
{
    Q_OBJECT

    AcquisitionMenu m_acq_menu;

    QPushButton* m_acquisition;
    QPushButton* m_chart;

public:
    explicit MainMenu();
    ~MainMenu() { }

public slots:
    void show();
    void hide();

    void setup(const std::string &parent_name, QWidget *central_widget);

    void is_acq_clicked();

    void is_chart_clicked();

signals:
    void command(const std::string &);
};

#endif //BARKHAUSEN_STUDIO_MAINMENU_H
