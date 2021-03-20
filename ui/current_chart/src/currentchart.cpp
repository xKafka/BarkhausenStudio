//
// Created by fkafka on 16. 3. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_CurrentChart.h" resolved
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>

#include <QFrame>
#include <QPushButton>
#include <QButtonGroup>
#include <QComboBox>
#include <QtMath>

#include <QtWidgets/QVBoxLayout>

#include "currentchart.h"
#include <ui_current_chart.h>
#include <iostream>

QT_CHARTS_USE_NAMESPACE

CurrentChart::CurrentChart(QWidget *parent)
        :   QWidget(parent),
            ui(new Ui::CurrentChart),
            m_chart(new QChart),
            m_series(new QLineSeries)
{
    setFixedSize(800, 500);

    time = 0.0;

    m_chart->addSeries(m_series);

    m_chart->createDefaultAxes(); // Preparing the axis
    m_chart->axisY()->setRange(-10,10);

    m_chart->axisX()->setRange(0,1.0);

    // Same formatting
    m_chart->setBackgroundVisible(false);
    m_chart->setMargins(QMargins(0,0,0,0));
    m_chart->legend()->hide();
    m_chart->setPlotAreaBackgroundBrush(QBrush(Qt::white));
    m_chart->setPlotAreaBackgroundVisible(true);
    auto chartView = new QChartView(m_chart);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(chartView);

}

CurrentChart::~CurrentChart() {

}

void CurrentChart::new_data(const unsigned char *data, const std::size_t data_size, const std::size_t sample_rate)
{
 //   std::cout << "New data::::   " << data.data() << "  size:::  " << data.size() << '\n';

    constexpr int max_val = 1 << 16;

    auto data_moved = data + 10;

    double timer = 0.0;

    double step = 2 * (1.0 / (data_size - 10 / 2.0));

    m_series->clear();

    for(auto i = 0, x = 0; i < data_size - 10; i += 2, ++x)
    {
        uint16_t value = *(data_moved + i) + (*(data_moved + i + 1) << 8);

        double abs_val = ((2.0 * value)/max_val) * 10.0;

        m_series->append(timer, abs_val);

        timer += step;
    }
}