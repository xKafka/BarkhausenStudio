#include <QLineEdit>
#include <mainwindow.h>
#include <ui_MainWindow.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    :   QMainWindow(parent),
        m_ui{ std::make_unique<Ui::MainWindow>() },
        m_api_core{ std::make_unique<Core>() }
{
    m_ui->setupUi(m_api_core.get(), this);

    setMouseTracking(true);

    connect(m_api_core->data_creator_unsafe()->worker(), &DataCreatorWorker::new_ui_data_available, this, &MainWindow::process_data);

    auto widgets_resize_factor = [&]()
    {
        QRect out;
        const auto bark_geo = geometry();

        out.setTopLeft({ bark_geo.topLeft().x(), bark_geo.topLeft().y() });

        out.setTopRight({ static_cast<int>(bark_geo.topRight().x() * 0.78), bark_geo.topRight().y() });

        out.setBottomLeft({ bark_geo.bottomLeft().x(), static_cast<int>(bark_geo.bottomLeft().y() * 0.95) });

        out.setBottomRight({ static_cast<int>(bark_geo.bottomRight().x() * 0.78), static_cast<int>(bark_geo.bottomRight().y() * 0.95) });

        return out;
    };

    const auto resize_factor = widgets_resize_factor();

    m_ui->barkhausen_chart->set_resize_factor(resize_factor);
    m_ui->hysteresis_chart->set_resize_factor(resize_factor);
    m_ui->B_H_chart->set_resize_factor(resize_factor);
}

MainWindow::~MainWindow() = default;

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    m_ui->barkhausen_chart->view()->chart()->cursors()->table()->setPos(event->pos());

    QMainWindow::mouseMoveEvent(event);
}

void MainWindow::process_data()
{
    const auto &buffer = m_api_core->buffer_unsafe();

    if(!buffer->ui_data.barkhausen_ui_data.isEmpty())
    {
        m_ui->barkhausen_chart->update_data(buffer->ui_data.barkhausen_ui_data);

        buffer->ui_data.barkhausen_ui_data.clear();
    }

    if(!buffer->ui_data.B_H_ui_data.isEmpty())
    {
        m_ui->B_H_chart->update_data(buffer->ui_data.B_H_ui_data);
    }
}
