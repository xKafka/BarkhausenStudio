/********************************************************************************
** Form generated from reading UI file 'MainMenuWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENUWINDOW_H
#define UI_MAINMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenuWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_single_shot;
    QPushButton *pushButton_measurement_start;
    QPushButton *pushButton_measurement_stop;
    QPushButton *pushButton_measurement_settings;
    QPushButton *pushButton_graph_settings;
    QPushButton *pushButton_close_application;

    void setupUi(QWidget *MainMenuWindow)
    {
        if (MainMenuWindow->objectName().isEmpty())
            MainMenuWindow->setObjectName(QString::fromUtf8("MainMenuWindow"));
        MainMenuWindow->resize(183, 905);
        gridLayout = new QGridLayout(MainMenuWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_single_shot = new QPushButton(MainMenuWindow);
        pushButton_single_shot->setObjectName(QString::fromUtf8("pushButton_single_shot"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_single_shot->sizePolicy().hasHeightForWidth());
        pushButton_single_shot->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_single_shot, 0, 0, 1, 1);

        pushButton_measurement_start = new QPushButton(MainMenuWindow);
        pushButton_measurement_start->setObjectName(QString::fromUtf8("pushButton_measurement_start"));
        sizePolicy.setHeightForWidth(pushButton_measurement_start->sizePolicy().hasHeightForWidth());
        pushButton_measurement_start->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measurement_start, 1, 0, 1, 1);

        pushButton_measurement_stop = new QPushButton(MainMenuWindow);
        pushButton_measurement_stop->setObjectName(QString::fromUtf8("pushButton_measurement_stop"));
        sizePolicy.setHeightForWidth(pushButton_measurement_stop->sizePolicy().hasHeightForWidth());
        pushButton_measurement_stop->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measurement_stop, 2, 0, 1, 1);

        pushButton_measurement_settings = new QPushButton(MainMenuWindow);
        pushButton_measurement_settings->setObjectName(QString::fromUtf8("pushButton_measurement_settings"));
        sizePolicy.setHeightForWidth(pushButton_measurement_settings->sizePolicy().hasHeightForWidth());
        pushButton_measurement_settings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measurement_settings, 3, 0, 1, 1);

        pushButton_graph_settings = new QPushButton(MainMenuWindow);
        pushButton_graph_settings->setObjectName(QString::fromUtf8("pushButton_graph_settings"));
        sizePolicy.setHeightForWidth(pushButton_graph_settings->sizePolicy().hasHeightForWidth());
        pushButton_graph_settings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_graph_settings, 4, 0, 1, 1);

        pushButton_close_application = new QPushButton(MainMenuWindow);
        pushButton_close_application->setObjectName(QString::fromUtf8("pushButton_close_application"));
        sizePolicy.setHeightForWidth(pushButton_close_application->sizePolicy().hasHeightForWidth());
        pushButton_close_application->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_close_application, 5, 0, 1, 1);


        retranslateUi(MainMenuWindow);

        QMetaObject::connectSlotsByName(MainMenuWindow);
    } // setupUi

    void retranslateUi(QWidget *MainMenuWindow)
    {
        MainMenuWindow->setWindowTitle(QApplication::translate("MainMenuWindow", "MainMenuWindow", nullptr));
        pushButton_single_shot->setText(QApplication::translate("MainMenuWindow", "Single Shot", nullptr));
        pushButton_measurement_start->setText(QApplication::translate("MainMenuWindow", "Start", nullptr));
        pushButton_measurement_stop->setText(QApplication::translate("MainMenuWindow", "Stop", nullptr));
        pushButton_measurement_settings->setText(QApplication::translate("MainMenuWindow", "Measurement \n"
"Settings", nullptr));
        pushButton_graph_settings->setText(QApplication::translate("MainMenuWindow", "Graph Settings", nullptr));
        pushButton_close_application->setText(QApplication::translate("MainMenuWindow", "Close Application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenuWindow: public Ui_MainMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENUWINDOW_H
