#include "Ball.hpp"

Ball::Ball() : m_color(Color::blue), m_radius {12.50}, m_type(Balltype::handball) {}

Ball::Ball(Balltype type, float radius, Color color) : m_type(type), 
                                m_radius(radius), m_color(color) {}

Ball::Ball(const Ball& other) {
    // Här kan även en initiation list användas
    this->m_type = other.m_type;
    this->m_radius = other.m_radius;
    this->m_color = other.m_color;
}

Ball& Ball::operator=(const Ball& other) {
    // Om objekten är lika behövs inget göras. Dvs, gör inte arbete du kan undvika.
    if(this != &other) { 
        this->m_type = other.m_type;
        this->m_radius = other.m_radius;
        this->m_color = other.m_color; 
    }
    return *this;
}

bool Ball::operator==(const Ball& other) const {
    return (m_type == other.m_type && m_radius == other.m_radius && m_color == other.m_color);
}

bool Ball::operator!=(const Ball& other) const {
    return !(m_type == other.m_type && m_radius == other.m_radius && m_color == other.m_color);
}

enum Balltype Ball::getType() const {
    return this->m_type;
}

float Ball::getRadius() const {
    return this->m_radius;
}

enum Color Ball::getColor() const {
    return this->m_color;
}

void Ball::setType(Balltype type) {
    this->m_type = type;
}

void Ball::setRadius(float radius) {
    this->m_radius = radius;
}

void Ball::setColor(Color color) {
    this->m_color = color;
}

float Ball::getVolume() const {
    return (m_radius * m_radius * PI);

}
