//
// Created by fkafka on 27. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEM_TYPES_H
#define BARKHAUSEN_STUDIO_MEM_TYPES_H

#include <memory>

template<typename Type>
class SharedData
{
    std::unique_ptr<Type> m_data;

public:
    SharedData()
            :   m_data{ std::make_unique<Type>() }
    {}
    SharedData(Type &&data)
            :   m_data{ std::make_unique<Type>(data) }
    {}
    template<typename ...Types>
    SharedData(Types &...args)
        : m_data{ std::make_unique<Type>(args...) }
    {

    }

    auto *get() { return m_data.get(); }

    auto *get() const { return m_data.get(); }

    auto &operator->()
    {
        return m_data;
    }

    auto &operator->() const
    {
        return m_data;
    }

    auto is_empty() const { return m_data == nullptr; }

};

template<typename Type>
class ReadOnlyRef
{
    const Type *m_ref;

public:
    ReadOnlyRef() = default;

    ReadOnlyRef(const SharedData<Type> &data)
            :   m_ref{ data.get() }
    {}

    auto &operator*() const
    {
        return *m_ref;
    }

    auto *operator->() const
    {
        return m_ref;
    }

    auto get() const { return m_ref; }

    auto is_empty() const { return m_ref == nullptr; }
};

template<typename Type>
class ReadWriteRef
{
    Type *m_ref;

public:
    ReadWriteRef() = default;

    ReadWriteRef(SharedData<Type> &data)
            :   m_ref{ data.get() }
    {}

    auto &operator*()
    {
        return *m_ref;
    }

    auto *operator->()
    {
        return m_ref;
    }

    auto get() { return m_ref; }

    auto is_empty() const { return m_ref == nullptr; }
};

#endif //BARKHAUSEN_STUDIO_MEM_TYPES_H
