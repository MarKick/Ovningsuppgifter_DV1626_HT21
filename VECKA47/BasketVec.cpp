#include "BasketVec.hpp"

Basket::Basket(const Basket& other) {
    // deep copy of vector
    for (int i = 0; i < other.m_balls.size(); ++i) {
        this->m_balls.push_back(other.m_balls[i]);
    }
}

Basket& Basket::operator=(const Basket& other) {
    if(this != &other) {
        for (int i = 0; i < other.m_balls.size(); ++i) {
            this->m_balls.push_back(other.m_balls[i]);
        }
    }
    return *this;
}

void Basket::addBall(const Ball& ball) {
    this->m_balls.push_back(ball);
}

void Basket::addBall(Balltype type, float radius, Color color) {
    Ball obj(type, radius, color);
    this->m_balls.push_back(obj);

}

void Basket::RemoveBalls(const Ball& ball) {
    for (int i = 0; i < m_balls.size(); ++i) {
        if (ball == m_balls[i]) {
            m_balls.erase(m_balls.begin()+i);
        }    
    }
}

void Basket::RemoveBalls(Balltype type, float radius, Color color) {
    
    for (int i = 0; i < m_balls.size(); ++i) {
        if(m_balls[i].getType() == type && m_balls[i].getRadius() == radius 
            && m_balls[i].getColor() == color) {
            m_balls.erase(m_balls.begin()+i);
        }
    }
}

int Basket::getBallCount() {
    return m_balls.size();    
}

void Basket::getBallsofType(Balltype type, std::vector<Ball>& outVector) {
    for (int i = 0; i < m_balls.size(); ++i) {
        if (type == m_balls[i].getType()) {
            outVector.push_back(m_balls[i]);
        }
    }
}

void Basket::getBallsColor(Color color, std::vector<Ball>& outVector) {
    for (int i = 0; i < m_balls.size(); ++i) {
        if (color == m_balls[i].getColor()) {
            outVector.push_back(m_balls[i]);
        }
    }
}

void Basket::getBallsofVolume(float minVolume, float maxVolume, std::vector<Ball>& outVector) {
    for (int i = 0; i < m_balls.size(); ++i) {
        if (minVolume <= m_balls[i].getVolume() 
            &&  m_balls[i].getVolume() <= maxVolume) {
            outVector.push_back(m_balls[i]);
        }
    }
}
