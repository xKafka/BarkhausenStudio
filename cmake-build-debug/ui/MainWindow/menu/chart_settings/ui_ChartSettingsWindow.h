/********************************************************************************
** Form generated from reading UI file 'ChartSettingsMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTSETTINGSWINDOW_H
#define UI_CHARTSETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChartSettingsWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_back;
    QPushButton *pushButton_intensity_flux_chart;
    QPushButton *pushButton_hysteresis_chart;
    QPushButton *pushButton_barkhausen_noise_chart;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ChartSettingsWindow)
    {
        if (ChartSettingsWindow->objectName().isEmpty())
            ChartSettingsWindow->setObjectName(QString::fromUtf8("ChartSettingsWindow"));
        ChartSettingsWindow->resize(183, 905);
        gridLayout = new QGridLayout(ChartSettingsWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        pushButton_back = new QPushButton(ChartSettingsWindow);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_back, 3, 0, 1, 1);

        pushButton_intensity_flux_chart = new QPushButton(ChartSettingsWindow);
        pushButton_intensity_flux_chart->setObjectName(QString::fromUtf8("pushButton_intensity_flux_chart"));
        sizePolicy.setHeightForWidth(pushButton_intensity_flux_chart->sizePolicy().hasHeightForWidth());
        pushButton_intensity_flux_chart->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_intensity_flux_chart, 2, 0, 1, 1);

        pushButton_hysteresis_chart = new QPushButton(ChartSettingsWindow);
        pushButton_hysteresis_chart->setObjectName(QString::fromUtf8("pushButton_hysteresis_chart"));
        sizePolicy.setHeightForWidth(pushButton_hysteresis_chart->sizePolicy().hasHeightForWidth());
        pushButton_hysteresis_chart->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_hysteresis_chart, 1, 0, 1, 1);

        pushButton_barkhausen_noise_chart = new QPushButton(ChartSettingsWindow);
        pushButton_barkhausen_noise_chart->setObjectName(QString::fromUtf8("pushButton_barkhausen_noise_chart"));
        sizePolicy.setHeightForWidth(pushButton_barkhausen_noise_chart->sizePolicy().hasHeightForWidth());
        pushButton_barkhausen_noise_chart->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_barkhausen_noise_chart, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);


        retranslateUi(ChartSettingsWindow);

        QMetaObject::connectSlotsByName(ChartSettingsWindow);
    } // setupUi

    void retranslateUi(QWidget *ChartSettingsWindow)
    {
        ChartSettingsWindow->setWindowTitle(QApplication::translate("ChartSettingsWindow", "ChartSettingsWindow", nullptr));
        pushButton_back->setText(QApplication::translate("ChartSettingsWindow", "Back", nullptr));
        pushButton_intensity_flux_chart->setText(QApplication::translate("ChartSettingsWindow", "Intensity Flux\n"
"Chart", nullptr));
        pushButton_hysteresis_chart->setText(QApplication::translate("ChartSettingsWindow", "Hysteresis\n"
"Chart", nullptr));
        pushButton_barkhausen_noise_chart->setText(QApplication::translate("ChartSettingsWindow", "Barkhausen Noise\n"
"Chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChartSettingsWindow: public Ui_ChartSettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTSETTINGSWINDOW_H
