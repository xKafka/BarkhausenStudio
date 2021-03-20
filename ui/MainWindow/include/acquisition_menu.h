//
// Created by fkafka on 18. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_ACQUISITIONMENU_H
#define BARKHAUSEN_STUDIO_ACQUISITIONMENU_H

#include <QPushButton>
#include <QWidget>
#include <QObject>
#include <command.h>

#include <acquisition_settings_menu.h>

class AcquisitionMenu : public QObject
{
    Q_OBJECT

    AcquisitionSettingsMenu m_settings_menu;

    QPushButton* m_single_shot;
    QPushButton* m_start;
    QPushButton* m_stop;
    QPushButton* m_settings;
    QPushButton* m_back;

public:
    explicit AcquisitionMenu();
    ~AcquisitionMenu() { }


public slots:
    void show();
    void hide();

    void acquisition_running(bool running);

    void setup(const std::string &parent_name, QWidget *central_widget);

    void is_single_shot_clicked();
    void is_start_clicked();
    void is_stop_clicked();
    void is_settings_clicked();
    void is_back_clicked();

signals:
    void command(const std::string &);
};


#endif //BARKHAUSEN_STUDIO_ACQUISITIONMENU_H
