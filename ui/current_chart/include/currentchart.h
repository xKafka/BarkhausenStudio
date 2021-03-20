//
// Created by fkafka on 16. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_CURRENTCHART_H
#define BARKHAUSEN_STUDIO_CURRENTCHART_H

#include <QtWidgets/QWidget>
#include <QtCharts/QChartGlobal>
#include <QLabel>
#include <QTimer>

QT_CHARTS_BEGIN_NAMESPACE
    class QLineSeries;
    class QChart;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

QT_BEGIN_NAMESPACE
namespace Ui { class CurrentChart; }
QT_END_NAMESPACE

class CurrentChart : public QWidget {
    Q_OBJECT

public:
    explicit CurrentChart(QWidget *parent = nullptr);

    ~CurrentChart() override;

public slots:
    void new_data(const unsigned char *, const std::size_t, const std::size_t);

private:
    Ui::CurrentChart *ui;
    QChart *m_chart;
    QLineSeries *m_series;
    double cnt{ 0.0 };

    double time = 0;

};

#endif //BARKHAUSEN_STUDIO_CURRENTCHART_H
