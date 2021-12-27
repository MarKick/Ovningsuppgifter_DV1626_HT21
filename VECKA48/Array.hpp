
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstring>
template <typename T>
class Array {
private:
    static const int size_increase = 2;  
    static const int DEFAULT_CAPACITY = 10;
    T* m_array;
    int m_capacity;
    int m_used;

    void resize() {
        this->m_capacity *= size_increase;
        T* temp_arr = new T[this->m_capacity];

        for (int i = 0; i < m_used; ++i) {
           temp_arr[i] = m_array[i];
        }

        delete[] this->m_array;
        m_array = temp_arr;
    }

public:

    Array() : m_capacity(DEFAULT_CAPACITY), m_used(0) {
        this->m_array = new T[m_capacity];
    }

    ~Array() {
        delete[] this->m_array;
    }

    void Append(const T& object) {
        if (m_used == m_capacity -1) {
            resize();
        }
        m_array[m_used] = object;
        ++m_used;
    }

};

#endif // ARRAY_HPP