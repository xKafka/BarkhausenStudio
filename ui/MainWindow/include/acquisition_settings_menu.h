//
// Created by fkafka on 18. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_ACQUISITION_SETTINGS_MENU_H
#define BARKHAUSEN_STUDIO_ACQUISITION_SETTINGS_MENU_H

#include <QPushButton>
#include <QWidget>
#include <QObject>
#include <memory>
#include <command.h>

#include <acqsettingswidget.h>

class AcquisitionSettingsMenu : public QObject
{
    Q_OBJECT

    std::unique_ptr<AcqSettingsWidget> m_widget;

public:
    explicit AcquisitionSettingsMenu();
    ~AcquisitionSettingsMenu() { }

    void show();
    void hide();

    auto settings_widget() const { return m_widget.get(); }

signals:
    void command(const std::string &);
};

#endif //BARKHAUSEN_STUDIO_ACQUISITION_SETTINGS_MENU_H
