/********************************************************************************
** Form generated from reading UI file 'main_menu_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_MENU_WINDOW_H
#define UI_MAIN_MENU_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_menu_window
{
public:
    QPushButton *pushButton_measurement_start;
    QPushButton *pushButton_measurement_stop;
    QPushButton *pushButton_single_shot;
    QPushButton *pushButton_measurement_settings;
    QPushButton *pushButton_graph_settings;
    QPushButton *pushButton_close_application;

    void setupUi(QWidget *main_menu_window)
    {
        if (main_menu_window->objectName().isEmpty())
            main_menu_window->setObjectName(QString::fromUtf8("main_menu_window"));
        main_menu_window->resize(199, 883);
        pushButton_measurement_start = new QPushButton(main_menu_window);
        pushButton_measurement_start->setObjectName(QString::fromUtf8("pushButton_measurement_start"));
        pushButton_measurement_start->setGeometry(QRect(20, 160, 151, 131));
        pushButton_measurement_stop = new QPushButton(main_menu_window);
        pushButton_measurement_stop->setObjectName(QString::fromUtf8("pushButton_measurement_stop"));
        pushButton_measurement_stop->setGeometry(QRect(20, 300, 151, 131));
        pushButton_single_shot = new QPushButton(main_menu_window);
        pushButton_single_shot->setObjectName(QString::fromUtf8("pushButton_single_shot"));
        pushButton_single_shot->setGeometry(QRect(20, 20, 151, 131));
        pushButton_measurement_settings = new QPushButton(main_menu_window);
        pushButton_measurement_settings->setObjectName(QString::fromUtf8("pushButton_measurement_settings"));
        pushButton_measurement_settings->setGeometry(QRect(20, 440, 151, 131));
        pushButton_graph_settings = new QPushButton(main_menu_window);
        pushButton_graph_settings->setObjectName(QString::fromUtf8("pushButton_graph_settings"));
        pushButton_graph_settings->setGeometry(QRect(20, 580, 151, 131));
        pushButton_close_application = new QPushButton(main_menu_window);
        pushButton_close_application->setObjectName(QString::fromUtf8("pushButton_close_application"));
        pushButton_close_application->setGeometry(QRect(20, 720, 151, 131));

        retranslateUi(main_menu_window);

        QMetaObject::connectSlotsByName(main_menu_window);
    } // setupUi

    void retranslateUi(QWidget *main_menu_window)
    {
        main_menu_window->setWindowTitle(QApplication::translate("main_menu_window", "main_menu_window", nullptr));
        pushButton_measurement_start->setText(QApplication::translate("main_menu_window", "Start", nullptr));
        pushButton_measurement_stop->setText(QApplication::translate("main_menu_window", "Stop", nullptr));
        pushButton_single_shot->setText(QApplication::translate("main_menu_window", "Single Shot", nullptr));
        pushButton_measurement_settings->setText(QApplication::translate("main_menu_window", "Measurement \n"
"Settings", nullptr));
        pushButton_graph_settings->setText(QApplication::translate("main_menu_window", "Graph Settings", nullptr));
        pushButton_close_application->setText(QApplication::translate("main_menu_window", "Close Application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_menu_window: public Ui_main_menu_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_MENU_WINDOW_H
