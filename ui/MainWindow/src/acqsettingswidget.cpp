//
// Created by fkafka on 19. 3. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_AcqSettingsWidget.h" resolved

#include <acqsettingswidget.h>
#include <ui_AcqSettingsWidget.h>

#include <QDebug>
#include <QFont>
#include <QMessageBox>
#include <QSlider>

AcqSettingsWidget::AcqSettingsWidget(QWidget *parent) :
        QWidget(parent),
        m_ui(std::make_unique<Ui::AcqSettingsWidget>())
{
    m_ui->setupUi(this);

    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    QFont font;
    font.setPointSize(font.pointSize() + 3);

    m_ui->comboBox_port->setFont(font);
    m_ui->comboBox_resource->setFont(font);
    m_ui->comboBox_polarity->setFont(font);

    connect(m_ui->horizontalSlider_points_per_chunk, &QSlider::valueChanged, this, [&](const int value)
    {
        m_ui->label_points_per_chunk_vals->setText(QString::number(value));
    });

    connect(m_ui->horizontalSlider_sample_rate, &QSlider::valueChanged, this, [&](const int value)
    {
        m_ui->label_sample_rate_vals->setText(QString::number(value));
    });

    connect(m_ui->horizontalSlider_voltage_range, &QSlider::valueChanged, this, [&](const int value)
    {
        m_ui->label_voltage_range_vals->setText(QString::number(value));
    });

    connect(m_ui->pushButton_save, &QPushButton::clicked, this, [&](){ is_save_clicked(); });

    connect(m_ui->pushButton_back, &QPushButton::clicked, this, [&](){ is_back_clicked(); });
}

AcqSettingsWidget::~AcqSettingsWidget()
{

}

std::string AcqSettingsWidget::get_polarity()
{
    const auto ret_val = m_ui->comboBox_polarity->currentText().toStdString();

    return ret_val == "Bipolar" ? "BIP" : "UNIP";
}

void AcqSettingsWidget::is_back_clicked()
{
    hide();

    emit command("show_prev");
}

bool AcqSettingsWidget::should_save_changes()
{
    auto save = QMessageBox::warning(this,  tr("New settings"),
                                                    tr("Do you want to save your changes?"),
                                                    QMessageBox::Save | QMessageBox::Discard);

    return save == QMessageBox::StandardButton::Save;
}

void AcqSettingsWidget::is_save_clicked()
{
    const auto sample_rate = std::to_string(m_ui->horizontalSlider_sample_rate->value());
    const auto points_per_chunk = std::to_string(m_ui->horizontalSlider_points_per_chunk->value());
    const auto voltage_range = std::to_string(m_ui->horizontalSlider_voltage_range->value());
    const auto resource = m_ui->comboBox_resource->currentText().toStdString();;
    const auto port = m_ui->comboBox_port->currentText().toStdString();
    const auto polarity = get_polarity();

    std::string base { "{ \"current_sensor\" } { \"change\" } { \"settings\" } {" };

    if(!points_per_chunk.empty())
        base += " \"points_per_chunk=" + points_per_chunk + '\"';

    if(!sample_rate.empty())
        base += " \"sample_rate=" + sample_rate + '\"';

    if(!voltage_range.empty())
        base += " \"range=" + voltage_range + '\"';

    if(!port.empty())
        base += " \"port=" + port + '\"';

    if(!resource.empty())
        base += " \"resource=" + resource + '\"';

    if(!polarity.empty())
        base += " \"polarity=" + polarity;

    base += + "\" }";

    if(should_save_changes())
    {
        qDebug() << base.data();

        is_back_clicked();
    }
}
