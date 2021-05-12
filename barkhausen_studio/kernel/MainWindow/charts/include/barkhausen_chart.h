//
// Created by fkafka on 18. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_H
#define BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_H

#include <chartwindow.h>
#include <mem_types.h>
#include <settings_storage.h>
#include <state_changing_dial.h>
#include <ui_settings.h>
#include <utils.h>

class BarkhausenChart : public ChartWindow
{
    ReadWriteRef<SettingsStorage> m_settings_storage;

    bool m_auto{ false };

    struct Settings
    {
        using T = double;

        T min_y, max_y;
        T peak_to_peak;
        T exposition_min, exposition_max;
        T exposition_window;
        T min_exposition_inc;
        T min_amplitude_inc;

        T amplitude_offset;
        T exposition_offset;
    };

    //optimize later { no time } ... don't deep copy it
    QVector<QPointF> m_last_data_copy;

    QVector<QPointF> m_current_exposition_window;

    bool m_use_exposition_window{ false };

    bool m_auto_ranged{ false };

    Settings m_sett;

    template<typename IteratorType>
    auto vector_from_window(const IteratorType *left, const IteratorType *right)
    {
        auto begin = left;

        const std::size_t size = right - left;

        QVector<IteratorType> ret_val(size);

        for(auto &item : ret_val)
        {
            item = *begin++;
        }

        return ret_val;
    }

    void init()
    {
        m_sett.min_y = settings_unsafe().get<double>(BarkhausenSetting::MinY);

        m_sett.max_y = settings_unsafe().get<double>(BarkhausenSetting::MaxY);

        m_sett.exposition_min = settings_unsafe().get<double>(BarkhausenSetting::ExpositionMin);

        m_sett.exposition_max = settings_unsafe().get<double>(BarkhausenSetting::ExpositionMax);

        m_sett.min_exposition_inc = settings_unsafe().get<double>(BarkhausenSetting::MinExpIncVal);

        m_sett.min_amplitude_inc = settings_unsafe().get<double>(BarkhausenSetting::MinAmplIncVal);

        m_sett.peak_to_peak = m_sett.max_y - m_sett.min_y;

        m_sett.exposition_window = m_sett.exposition_max - m_sett.exposition_min;

        m_sett.amplitude_offset = 0.0;

        m_sett.exposition_offset = 0.0;

        view()->set_y_range(m_sett.min_y, m_sett.max_y);

        view()->set_x_range(m_sett.exposition_min, m_sett.exposition_max);
    }

    void change_table_value(const std::string &key, double value)
    {
        view()->table()->change_val(key, Utility::Cast::to_string(value));
    }

    void reload_table()
    {
        change_table_value("timebase", m_sett.exposition_window);

        change_table_value("offset", m_sett.amplitude_offset);

        change_table_value("peak_to_peak", m_sett.peak_to_peak);

        change_table_value("min_y", m_sett.min_y);

        change_table_value("max_y", m_sett.max_y);
    }

    void update_timebase()
    {
        settings_unsafe().change(BarkhausenSetting::ExpositionMin, m_sett.exposition_min);
        settings_unsafe().change(BarkhausenSetting::ExpositionMax, m_sett.exposition_max);
    }

    auto get_ref_from_dial_state(const double ref, const StateChangingDial::State state) const
    {
        switch(state)
        {
            case StateChangingDial::State::x0_1: return ref * 0.1;

            case StateChangingDial::State::x1: return ref;

            case StateChangingDial::State::x10: return ref * 10;

            default: return std::numeric_limits<double>::max();
        }
    }

public:
    explicit BarkhausenChart(SharedData<SettingsStorage> &settings, QWidget *parent = nullptr)
        :   ChartWindow{ parent },
            m_settings_storage{ settings },
            m_sett{ }
    {
        init();

        view()->create_text_field({
                                        {"peak_to_peak", "V_pp: "  },
                                        {"min_y", "V_min: " },
                                        {"max_y", "V_max: " },
                                        {"timebase", "Timebase[s]: " },
                                        {"offset", "Offset: " }
        });

        reload_table();
    }

    BarkhausenSettings &settings_unsafe() { return *m_settings_storage->ui_settings->barkhausen.get(); }

    void timebase_offset([[maybe_unused]] double per, StateChangingDial::State state, bool goes_clockwise)
    {
        const auto incremental_value = get_ref_from_dial_state(m_sett.min_exposition_inc, state);

        m_sett.exposition_min = goes_clockwise ? m_sett.exposition_min + incremental_value : m_sett.exposition_min - incremental_value;
        m_sett.exposition_max = goes_clockwise ? m_sett.exposition_max + incremental_value : m_sett.exposition_max - incremental_value;

        const auto [left, right] = get_timebase_window();

        m_current_exposition_window = vector_from_window(left, right);

        m_use_exposition_window = true;

        view()->update_data(m_current_exposition_window);

        m_sett.exposition_window = m_sett.exposition_max - m_sett.exposition_min;

        m_sett.exposition_offset = m_sett.exposition_max - m_sett.exposition_window / 2;

        view()->set_x_range(m_sett.exposition_min, m_sett.exposition_max);

        reload_table();
    }

    void amplitude_offset([[maybe_unused]] double per, const StateChangingDial::State state, const bool goes_clockwise)
    {
        const auto incremental_value = get_ref_from_dial_state(m_sett.min_amplitude_inc, state);

        m_sett.min_y = goes_clockwise ? m_sett.min_y + incremental_value : m_sett.min_y - incremental_value;
        m_sett.max_y = goes_clockwise ? m_sett.max_y + incremental_value : m_sett.max_y - incremental_value;

        m_sett.peak_to_peak = m_sett.max_y - m_sett.min_y;

        m_sett.amplitude_offset = m_sett.max_y - m_sett.peak_to_peak / 2;

        view()->set_y_range(m_sett.min_y, m_sett.max_y);

        reload_table();
    }

    void timebase_stretch([[maybe_unused]] double per, const StateChangingDial::State state, const bool goes_clockwise)
    {
        const auto incremental_value = get_ref_from_dial_state(m_sett.min_exposition_inc, state);

        auto min = goes_clockwise ? m_sett.exposition_min - incremental_value : m_sett.exposition_min + incremental_value;
        auto max = goes_clockwise ? m_sett.exposition_max + incremental_value : m_sett.exposition_max - incremental_value;

        if(auto peak_to_peak = max - min; peak_to_peak >= 0.0)
        {
            m_sett.exposition_max = max;
            m_sett.exposition_min = min;
            m_sett.exposition_window = peak_to_peak;

            const auto [left, right] = get_timebase_window();

            m_current_exposition_window = vector_from_window(left, right);

            m_use_exposition_window = true;

            m_sett.min_exposition_inc = m_sett.exposition_window / 100.0;

            view()->update_data(m_current_exposition_window);

            view()->set_x_range(m_sett.exposition_min, m_sett.exposition_max);

            reload_table();
        }
    }

    auto get_timebase_window() -> std::pair<QVector<QPointF>::const_iterator, QVector<QPointF>::const_iterator>
    {
        auto comparator_x = [](const QPointF &left, const QPointF &right)
        {
            return left.x() < right.x();
        };

        QPointF to_find_min(m_sett.exposition_min, 0.0);

        auto left = std::lower_bound(m_last_data_copy.begin(), m_last_data_copy.end(), to_find_min, comparator_x);

        QPointF to_find_max(m_sett.exposition_max, 0.0);

        auto right = std::lower_bound(m_last_data_copy.begin(), m_last_data_copy.end(), to_find_max, comparator_x);

        return { left, right };
    }

    void amplitude_stretch(double, const StateChangingDial::State state, const bool goes_clockwise)
    {
        const auto incremental_value = get_ref_from_dial_state(m_sett.min_amplitude_inc, state);

        auto min = goes_clockwise ? m_sett.min_y - incremental_value : m_sett.min_y + incremental_value;
        auto max = goes_clockwise ? m_sett.max_y + incremental_value : m_sett.max_y - incremental_value;

        if(auto peak_to_peak = max - min; peak_to_peak >= 0.0)
        {
            m_sett.max_y = max;
            m_sett.min_y = min;
            m_sett.peak_to_peak = peak_to_peak;

            m_sett.min_amplitude_inc = (m_sett.max_y - m_sett.min_y) / 100.0;

            view()->set_y_range(m_sett.min_y, m_sett.max_y);

            reload_table();
        }
    }

    auto find_min(const QVector<QPointF> &from)
    {
        auto y_comparator = [](const QPointF &left, const QPointF &right)
        {
            return left.y() < right.y();
        };

        return std::min_element(from.begin(), from.end(), y_comparator);
    }

    auto find_max(const QVector<QPointF> &from)
    {
        auto y_comparator = [](const QPointF &left, const QPointF &right)
        {
            return left.y() < right.y();
        };

        return std::max_element(from.begin(), from.end(), y_comparator);
    }

    void auto_range()
    {
        const auto &in = m_use_exposition_window ? m_current_exposition_window : m_last_data_copy;

        m_sett.min_y = find_min(in)->y();
        m_sett.max_y = find_max(in)->y();

        m_sett.min_amplitude_inc = (m_sett.max_y - m_sett.min_y) / 100.0;
        m_sett.min_exposition_inc = (in.last().x() - in.first().x()) / 100.0;

        view()->set_y_range(m_sett.min_y, m_sett.max_y);
    }

    bool is_auto_range() const { return m_auto; }

    void update_data(const QVector<QPointF> &new_data)
    {
        m_last_data_copy = new_data;

        m_use_exposition_window = false;

        view()->update_data(new_data);
    }
};

#endif //BARKHAUSEN_STUDIO_BARKHAUSEN_CHART_H
