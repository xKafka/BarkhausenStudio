/********************************************************************************
** Form generated from reading UI file 'HysteresisSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYSTERESISCHARTSETTINGSWINDOW_H
#define UI_HYSTERESISCHARTSETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HysteresisChartSettingsWindow
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_cursor_x_1;
    QPushButton *pushButton_cursor_x_2;
    QPushButton *pushButton_cursor_y_1;
    QPushButton *pushButton_cursor_y_2;
    QPushButton *pushButton_show_cursor;
    QPushButton *pushButton_back;
    QDial *dial_x;
    QPushButton *pushButton_trigger;
    QDial *dial_y;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *HysteresisChartSettingsWindow)
    {
        if (HysteresisChartSettingsWindow->objectName().isEmpty())
            HysteresisChartSettingsWindow->setObjectName(QString::fromUtf8("HysteresisChartSettingsWindow"));
        HysteresisChartSettingsWindow->resize(190, 905);
        gridLayout_2 = new QGridLayout(HysteresisChartSettingsWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_cursor_x_1 = new QPushButton(HysteresisChartSettingsWindow);
        pushButton_cursor_x_1->setObjectName(QString::fromUtf8("pushButton_cursor_x_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_cursor_x_1->sizePolicy().hasHeightForWidth());
        pushButton_cursor_x_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_x_1, 0, 0, 1, 1);

        pushButton_cursor_x_2 = new QPushButton(HysteresisChartSettingsWindow);
        pushButton_cursor_x_2->setObjectName(QString::fromUtf8("pushButton_cursor_x_2"));
        sizePolicy.setHeightForWidth(pushButton_cursor_x_2->sizePolicy().hasHeightForWidth());
        pushButton_cursor_x_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_x_2, 0, 1, 1, 1);

        pushButton_cursor_y_1 = new QPushButton(HysteresisChartSettingsWindow);
        pushButton_cursor_y_1->setObjectName(QString::fromUtf8("pushButton_cursor_y_1"));
        sizePolicy.setHeightForWidth(pushButton_cursor_y_1->sizePolicy().hasHeightForWidth());
        pushButton_cursor_y_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_y_1, 1, 0, 1, 1);

        pushButton_cursor_y_2 = new QPushButton(HysteresisChartSettingsWindow);
        pushButton_cursor_y_2->setObjectName(QString::fromUtf8("pushButton_cursor_y_2"));
        sizePolicy.setHeightForWidth(pushButton_cursor_y_2->sizePolicy().hasHeightForWidth());
        pushButton_cursor_y_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_y_2, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton_show_cursor = new QPushButton(HysteresisChartSettingsWindow);
        pushButton_show_cursor->setObjectName(QString::fromUtf8("pushButton_show_cursor"));
        sizePolicy.setHeightForWidth(pushButton_show_cursor->sizePolicy().hasHeightForWidth());
        pushButton_show_cursor->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_show_cursor, 2, 0, 1, 1);

        pushButton_back = new QPushButton(HysteresisChartSettingsWindow);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_back, 9, 0, 1, 1);

        dial_x = new QDial(HysteresisChartSettingsWindow);
        dial_x->setObjectName(QString::fromUtf8("dial_x"));

        gridLayout_2->addWidget(dial_x, 4, 0, 1, 1);

        pushButton_trigger = new QPushButton(HysteresisChartSettingsWindow);
        pushButton_trigger->setObjectName(QString::fromUtf8("pushButton_trigger"));
        sizePolicy.setHeightForWidth(pushButton_trigger->sizePolicy().hasHeightForWidth());
        pushButton_trigger->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_trigger, 8, 0, 1, 1);

        dial_y = new QDial(HysteresisChartSettingsWindow);
        dial_y->setObjectName(QString::fromUtf8("dial_y"));

        gridLayout_2->addWidget(dial_y, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_4, 7, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);


        retranslateUi(HysteresisChartSettingsWindow);

        QMetaObject::connectSlotsByName(HysteresisChartSettingsWindow);
    } // setupUi

    void retranslateUi(QWidget *HysteresisChartSettingsWindow)
    {
        HysteresisChartSettingsWindow->setWindowTitle(QApplication::translate("HysteresisChartSettingsWindow", "HysteresisChartSettingsWindow", nullptr));
        pushButton_cursor_x_1->setText(QApplication::translate("HysteresisChartSettingsWindow", "Cursor X_1", nullptr));
        pushButton_cursor_x_2->setText(QApplication::translate("HysteresisChartSettingsWindow", "Cursor X_2", nullptr));
        pushButton_cursor_y_1->setText(QApplication::translate("HysteresisChartSettingsWindow", "Cursor Y_1", nullptr));
        pushButton_cursor_y_2->setText(QApplication::translate("HysteresisChartSettingsWindow", "Cursor Y_2", nullptr));
        pushButton_show_cursor->setText(QApplication::translate("HysteresisChartSettingsWindow", "Show Cursors", nullptr));
        pushButton_back->setText(QApplication::translate("HysteresisChartSettingsWindow", "Back", nullptr));
        pushButton_trigger->setText(QApplication::translate("HysteresisChartSettingsWindow", "Trigger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HysteresisChartSettingsWindow: public Ui_HysteresisChartSettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYSTERESISCHARTSETTINGSWINDOW_H
