//
// Created by fkafka on 6. 4. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ChartWindow.h" resolved

#include "../include/chartwindow.h"
#include "ui_ChartWindow.h"

#include <QtCharts/QChart>

#include <QFrame>
#include <QButtonGroup>
#include <QtMath>

ChartWindow::ChartWindow(QWidget *parent) :
        QWidget{ parent },
        m_ui{ std::unique_ptr<Ui::ChartWindow>() },
        m_view_base{ new ChartView(this) },
        m_layout{ new QVBoxLayout(this) },
        m_resized{ false }
{
    m_ui->setupUi(this);

    setup();
}

void ChartWindow::setup()
{
    m_layout->addWidget(m_view_base);
}

void ChartWindow::set_resize_factor(const QRect &geo)
{
    m_original_geometry = geometry();

    m_after_double_click_geometry = geo;

    m_view_base->chart()->cursors()->set_resize_factor(geo);
}

void ChartWindow::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(is_resized())
    {
        setGeometry(m_original_geometry);

        m_view_base->chart()->cursors()->resize_to_small();
    }
    else
    {
        m_original_geometry = geometry();

        setGeometry(m_after_double_click_geometry);

        m_view_base->chart()->cursors()->resize_to_big();

        raise();
    }

    m_resized = !m_resized;

    QWidget::mouseDoubleClickEvent(event);
}

ChartWindow::~ChartWindow()
{
    delete m_layout;
    delete m_view_base;
}