/********************************************************************************
** Form generated from reading UI file 'info_table_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_TABLE_WIDGET_H
#define UI_INFO_TABLE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoTableWidget
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *InfoTableWidget)
    {
        if (InfoTableWidget->objectName().isEmpty())
            InfoTableWidget->setObjectName(QString::fromUtf8("InfoTableWidget"));
        InfoTableWidget->resize(400, 300);
        gridLayout = new QGridLayout(InfoTableWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(InfoTableWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 0, 1, 1);


        retranslateUi(InfoTableWidget);

        QMetaObject::connectSlotsByName(InfoTableWidget);
    } // setupUi

    void retranslateUi(QWidget *InfoTableWidget)
    {
        InfoTableWidget->setWindowTitle(QApplication::translate("InfoTableWidget", "InfoTableWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoTableWidget: public Ui_InfoTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_TABLE_WIDGET_H
