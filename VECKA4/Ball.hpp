#ifndef BALL_HPP
#define BALL_HPP
#include <iostream>

#define PI 3.141592

enum class Color {blue, yellow, red, green};
enum class Balltype {football, handball, tennisball};

class Ball {
private:
    
    Balltype m_type;
    float m_radius;
    Color m_color;

public:
    
    Ball();
    Ball(Balltype type, float radius, Color color);
    ~Ball() = default;

    Ball(const Ball& other);
    
    Ball& operator=(const Ball& other);
    
    bool operator==(const Ball& other) const;
    
    bool operator!=(const Ball& other) const;
    
    Balltype getType() const;
    
    float getRadius() const;
    
    Color getColor() const;
    
    void setType(Balltype type);
    
    void setRadius(float radius);
    
    void setColor(Color color);
    
    float getVolume() const;

};


#endif // BALL_HPP
