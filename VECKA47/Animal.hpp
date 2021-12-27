#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
protected:
    int m_legs;
public:
    Animal(int m_legs);
    // Animal& operator=(const Animal &other);
    // bool operator==(const Animal &other);

    // Gör klassen till en abstrakt klass
    virtual const void roar() const = 0;
    virtual const void eat() const = 0;
    virtual const void info() const = 0;
    virtual ~Animal() = default;
};

#endif // ANIMAL_HPP