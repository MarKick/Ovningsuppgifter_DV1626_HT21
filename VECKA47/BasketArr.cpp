#include "BasketArr.hpp"

Basket::Basket(int capacity) : capacity(capacity), m_balls(new Ball[capacity]), m_size(0) {
    // Kan även skrivas som:
    // m_ball = new Ball[capacity] 
    // detta om initiation list inte används
}

Basket::~Basket() {
    delete[] m_balls;
}

Basket::Basket(const Basket& other) {
    m_balls = new Ball[other.capacity]; 
    for (int i = 0; i < other.m_size; ++i) {
        this->m_balls[i] = other.m_balls[i];
    }
}

Basket& Basket::operator=(const Basket& other) {
    if(this != &other) {
        if(m_balls != nullptr) {
            delete[] m_balls; // frigör eventuellt minne allokerat tidigare
        }
        m_balls = new Ball[other.capacity]; 
        for (int i = 0; i < other.m_size; ++i) {
            this->m_balls[i] = other.m_balls[i];
        }
    }
    return *this;
}

void Basket::addBall(const Ball& ball) {
    this->m_balls[m_size] = ball;
    ++m_size;
}

void Basket::addBall(Balltype type, float radius, Color color) {
    Ball obj(type, radius, color);
    this->m_balls[m_size] = obj;
    m_size++;

}

void Basket::RemoveBalls(const Ball& ball) {
    Ball tmp;
    for (int i = 0; i < m_size; ++i) {
        if (ball == m_balls[i]) {
            for (int j = i; j < m_size-1; ++j) {
                m_balls[j] = m_balls[j+1];
            }
            --m_size;
        }    
    }
}

void Basket::RemoveBalls(Balltype type, float radius, Color color) {
    
    for (int i = 0; i < m_size; ++i) {
        if(m_balls[i].getType() == type && m_balls[i].getRadius() == radius 
            && m_balls[i].getColor() == color) {
            for (int j = i; j < m_size-1; ++j) {
                m_balls[j] = m_balls[j+1];
            }
            --m_size;
        }
    }
}

int Basket::getBallCount() {
    return this->m_size;    
}

void Basket::getBallsofType(Balltype type, Ball*& outArray, int& ballCountOut) {
    ballCountOut = 0;
    for (int i = 0; i < m_size; ++i) {
        if (type == m_balls[i].getType()) {
            outArray[ballCountOut] = m_balls[i];
            ballCountOut++;
        }
    }
}

void Basket::getBallsColor(Color color, Ball*& outArray, int& ballCountOut) {
    ballCountOut = 0;
    for (int i = 0; i < m_size; ++i) {
        if (color == m_balls[i].getColor()) {
            outArray[ballCountOut] = m_balls[i];
            ++ballCountOut;
        }
    }
}

void Basket::getBallsofVolume(float minVolume,float maxVolume,Ball*& outArray,int& ballCountOut) {
    ballCountOut = 0;
    for (int i = 0; i < m_size; ++i) {
        if (minVolume <= m_balls[i].getVolume() 
            &&  m_balls[i].getVolume() <= maxVolume) {
            outArray[ballCountOut] = m_balls[i];
            ++ballCountOut;
        }
    }
}
