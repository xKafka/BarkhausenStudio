//
// Created by fkafka on 6. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_INFO_TABLE_H
#define BARKHAUSEN_STUDIO_INFO_TABLE_H

#include <QTableWidgetItem>
#include <QGraphicsTextItem>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>
#include <QDebug>
#include <memory>

class InfoText : public QGraphicsTextItem
{
    std::string m_text;

public:
    explicit InfoText(const std::string &text)
        :   QGraphicsTextItem{ },
            m_text{ text }
    {
        change_text(text);
    }

    inline void change_text(const std::string &text)
    {
        setPlainText((m_text + text).data());
    }
};

class InfoTable : public QGraphicsRectItem
{
    std::map<std::string, InfoText *> m_texts;

    bool m_moving{ false };

public:
    InfoTable()
        :   QGraphicsRectItem{ },
            m_texts{ }
    {
        setPen({ Qt::white });

        show();
    }

    void create_text_field(const std::initializer_list<std::pair<std::string, std::string>> &list)
    {
        double biggest_text_field_size = -std::numeric_limits<double>::max();

        for(const auto& item : list)
        {
            const auto &last_item = m_texts.emplace(item.first, new InfoText(item.second));

            const auto &text_item_itr = last_item.first->second;

            scene()->addItem(text_item_itr);

            if(biggest_text_field_size < text_item_itr->boundingRect().width())
            {
                biggest_text_field_size = text_item_itr->boundingRect().width();
            }
        }

        auto text_box = m_texts.begin()->second->boundingRect();

        text_box.setHeight(text_box.height() * static_cast<double>(list.size()));
        text_box.setWidth(biggest_text_field_size);

        setRect(text_box);
    }

    bool is_moving() const { return m_moving; }

    void change_pos(const QPoint &pos)
    {
        setPos(pos);
        std::size_t on_item { 0 };

        for(const auto &item : m_texts)
        {
            auto &text = item.second;

            text->setPos(pos);
            text->setY(text->y() + on_item++ * text->boundingRect().height());
        }
    }

    void change_val(const std::string &key, const std::string &value)
    {
        m_texts[key]->change_text(value);
    }

    void mousePressEvent(QGraphicsSceneMouseEvent *event) override
    {
        m_moving = !m_moving;

        QGraphicsRectItem::mousePressEvent(event);
    }

    void hide_overridden()
    {
        hide();

        for(const auto &item : m_texts)
        {
            item.second->hide();
        }
    }

    void show_overridden()
    {
        show();

        for(const auto &item : m_texts)
        {
            item.second->show();
        }
    }
};

#endif //BARKHAUSEN_STUDIO_INFO_TABLE_H
