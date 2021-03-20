//
// Created by fkafka on 19. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_ACQ_POINTS_PER_CHUNK_H
#define BARKHAUSEN_STUDIO_ACQ_POINTS_PER_CHUNK_H

#include <QPushButton>
#include <QWidget>
#include <QObject>
#include <QSlider>

#include <command.h>

class AcqPointsPerChunk : public QObject
{
    Q_OBJECT

    QPushButton* m_save;
    QPushButton* m_back;
    QSlider* m_slider;

    Command make_command(const std::string &key);

public:
    explicit AcqPointsPerChunk();
    ~AcqPointsPerChunk() { }

    static auto name() { return "acq_points_per_chunk"; }

    static auto save_key() { return "save"; }
    static auto back_key() { return "back"; }

public slots:
    void show();
    void hide();

    void setup(const std::string &parent_name, QWidget *central_widget);

signals:
    void command(const Command &);
};

#endif //BARKHAUSEN_STUDIO_ACQ_POINTS_PER_CHUNK_H
