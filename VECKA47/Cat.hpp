#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
private:
    int m_stripes;
    float tail_len;
    std::string eye_color;

public:
    Cat(int m_stripes, float tail_len, std::string eye_color, int m_legs);
    const void roar() const override;
    const void eat() const override;
    const void info() const override;
    ~Cat() = default;
};

#endif // CAT_HPP