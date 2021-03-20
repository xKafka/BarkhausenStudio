//
// Created by fkafka on 19. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_ACQSETTINGSWIDGET_H
#define BARKHAUSEN_STUDIO_ACQSETTINGSWIDGET_H

#include <QWidget>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class AcqSettingsWidget; }
QT_END_NAMESPACE

class AcqSettingsWidget : public QWidget
{
    Q_OBJECT

    std::string get_polarity();

    bool should_save_changes();

public:
    explicit AcqSettingsWidget(QWidget *parent = nullptr);

    ~AcqSettingsWidget() override;

    void is_back_clicked();
    void is_save_clicked();

signals:
    void command(const std::string &);

private:
    std::unique_ptr<Ui::AcqSettingsWidget> m_ui;
};

#endif //BARKHAUSEN_STUDIO_ACQSETTINGSWIDGET_H
