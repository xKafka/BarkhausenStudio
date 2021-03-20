//
// Created by fkafka on 18. 3. 2021.
//

#include <QApplication>

#include <acquisition_settings_menu.h>

AcquisitionSettingsMenu::AcquisitionSettingsMenu()
    : m_widget{ std::make_unique<AcqSettingsWidget>() }
{
    connect(m_widget.get(), &AcqSettingsWidget::command, this, [&](const std::string &cmd)
    {
        emit command(cmd);
    });
}

void AcquisitionSettingsMenu::hide()
{
    m_widget->hide();
}

void AcquisitionSettingsMenu::show()
{
    m_widget->show();
}