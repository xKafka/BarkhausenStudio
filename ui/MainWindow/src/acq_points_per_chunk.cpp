//
// Created by fkafka on 19. 3. 2021.
//
#include <QApplication>

#include <acq_points_per_chunk.h>

AcqPointsPerChunk::AcqPointsPerChunk()
{}

void AcqPointsPerChunk::setup(const std::string &parent_name, QWidget *central_widget)
{
    m_save = new QPushButton(central_widget);
    m_back = new QPushButton(central_widget);
    m_slider = new QSlider(central_widget);

    m_save->setObjectName(QString::fromUtf8("push_button_acq_points_per_chunk_save"));
    m_save->setEnabled(true);
    m_save->setGeometry(QRect(1030, 560, 131, 41));

    m_back->setObjectName(QString::fromUtf8("push_button_acq_points_per_back"));
    m_back->setEnabled(true);
    m_back->setGeometry(QRect(1030, 620, 131, 41));

    m_slider->setObjectName(QString::fromUtf8("verticalSlider_points_per_chunk"));
    m_slider->setGeometry(QRect(1030, 50, 61, 530));
    m_slider->setPageStep(14);
    m_slider->setOrientation(Qt::Vertical);
    m_slider->setInvertedAppearance(false);
    m_slider->setTickPosition(QSlider::TicksBelow);

    m_save->setText(QApplication::translate(parent_name.data(), "Save", nullptr));
    m_back->setText(QApplication::translate(parent_name.data(), "...", nullptr));

    connect(m_save, &QPushButton::clicked, this, [&]()
    {
        command(make_command(AcqPointsPerChunk::save_key()));
    });

    connect(m_back, &QPushButton::clicked, this, [&]()
    {
        command(make_command(AcqPointsPerChunk::back_key()));
    });
}

Command AcqPointsPerChunk::make_command(const std::string &key) {

    Command ret_val;

    ret_val.module = AcqPointsPerChunk::name();
    ret_val.key = key;

    return ret_val;
}

void AcqPointsPerChunk::hide()
{
    m_save->hide();
    m_back->hide();
    m_slider->hide();
}
void AcqPointsPerChunk::show()
{
    m_save->show();
    m_back->show();
    m_slider->show();
}
