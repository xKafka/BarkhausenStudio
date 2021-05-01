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

    connect(m_api_core->data_creator_unsafe()->worker(), &DataCreatorWorker::new_ui_data_available, this, &MainWindow::process_data);

    auto widgets_resize_factor = [&]()
    {
        QRect out;
        const auto bark_geo = m_ui->barkhausen_chart->geometry();

        out.setTopLeft({ bark_geo.topLeft().x(), bark_geo.topLeft().y() / 2 });

        out.setTopRight({ bark_geo.topRight().x(), bark_geo.topRight().y() / 2 });

        out.setBottomLeft({ bark_geo.bottomLeft().x(), bark_geo.bottomLeft().y() });

        out.setBottomRight({ bark_geo.bottomRight().x(), bark_geo.bottomRight().y() });

        return out;
    };

    const auto resize_factor = widgets_resize_factor();

    m_ui->barkhausen_chart->set_resize_factor(resize_factor);
    m_ui->hysteresis_chart->set_resize_factor(resize_factor);
    m_ui->B_H_chart->set_resize_factor(resize_factor);
}

MainWindow::~MainWindow() = default;

void MainWindow::process_data()
{
    const auto &buffer = m_api_core->buffer_unsafe();

    if(!buffer->ui_data.barkhausen_ui_data.isEmpty())
    {
        m_ui->barkhausen_chart->update_data(buffer->ui_data.barkhausen_ui_data);
    }

    if(!buffer->ui_data.B_H_ui_data.isEmpty())
    {
        m_ui->B_H_chart->update_data(buffer->ui_data.B_H_ui_data);
    }

    buffer->ui_data.barkhausen_ui_data.clear();
    buffer->ui_data.B_H_ui_data.clear();
}
