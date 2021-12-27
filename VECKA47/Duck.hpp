
#ifndef DUCK_HPP
#define DUCK_HPP

#include "Animal.hpp"

class Duck : public Animal{
private:
    int m_feathers;
    double beek_len;
    std::string beek_color;

public:
    Duck(int m_feathers, double beek_len, std::string beek_color, int m_legs);
    const void roar() const override;
    const void eat() const override;
    const void info() const override;

    ~Duck() = default;
};

#endif // DUCK_HPP