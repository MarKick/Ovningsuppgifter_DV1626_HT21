#include "DynBasketArr.hpp"

// Basket::Basket(int capacity) : capacity(capacity), m_balls(new Ball*[capacity]), m_size(0) {
Basket::Basket(int capacity) : capacity(capacity), m_size(0) {
    this->m_balls = new Ball*[capacity];
}

Basket::~Basket() {
    for(int i = 0; i < capacity; ++i) {
        delete m_balls[i];
    }
    delete[] m_balls;
}

Basket::Basket(const Basket& other) {
    m_balls = new Ball*[other.capacity]; 
    for (int i = 0; i < other.m_size; ++i) {
        m_balls[i] = new Ball();
        m_balls[i] = other.m_balls[i]; // kopiera innehållet och inte pekaren 
    }
}

Basket& Basket::operator=(const Basket& other) {
    if(this != &other) {
        if (m_balls != nullptr) {
            delete[] m_balls; // delete memory allocated from before if any 
        }
        m_balls = new Ball*[other.capacity]; 
        for (int i = 0; i < other.m_size; ++i) {
            *m_balls[i] = *other.m_balls[i];
        }
    }
    return *this;
}

void Basket::addBall(const Ball& ball) {
    Ball* obj = new Ball(ball);
    m_balls[m_size] = obj;
    ++m_size;
}

void Basket::addBall(Balltype type, float radius, Color color) {
    Ball* obj = new Ball(type,radius,color);
    m_balls[m_size] = obj;
    m_size++;

}

void Basket::RemoveBalls(const Ball& ball) {
    Ball tmp;
    for (int i = 0; i < m_size; ++i) {
        if (ball == *m_balls[i]) {
            for (int j = i; j < m_size-1; ++j) {
                *m_balls[j] = *m_balls[j+1];
            }
            --m_size;
        }    
    }
}

void Basket::RemoveBalls(Balltype type, float radius, Color color) {
    
    for (int i = 0; i < m_size; ++i) {
        Ball* temp = m_balls[i];
        if(m_balls[i]->getType() == type && m_balls[i]->getRadius() == radius 
            && m_balls[i]->getColor() == color) {
            for (int j = i; j < m_size-1; ++j) {
                *m_balls[j] = *m_balls[j+1];
            }
            --m_size;
        }
    }
}

int Basket::getBallCount() {
    return this->m_size;    
}

void Basket::getBallsofType(Balltype type, Ball**& outArray, int& ballCountOut) {
    ballCountOut = 0;
    for (int i = 0; i < m_size; ++i) {
        if (type == m_balls[i]->getType()) {
            Ball* obj_ptr = new Ball(*m_balls[i]);
            outArray[ballCountOut] = obj_ptr;
            ++ballCountOut;
        }
    }
}

void Basket::getBallsColor(Color color, Ball**& outArray, int& ballCountOut) {
    ballCountOut = 0;
    for (int i = 0; i < m_size; ++i) {
        if (color == m_balls[i]->getColor()) {
            Ball* obj_ptr = new Ball(*m_balls[i]);
            outArray[ballCountOut] = obj_ptr;
            ++ballCountOut;
        }
    }
}

void Basket::getBallsofVolume(float minVolume,float maxVolume,Ball**& outArray,int& ballCountOut) {
    ballCountOut = 0;
    for (int i = 0; i < m_size; ++i) {
        if (minVolume <= m_balls[i]->getVolume() 
            &&  m_balls[i]->getVolume() <= maxVolume) {
            Ball* obj_ptr = new Ball(*m_balls[i]);
            outArray[ballCountOut] = obj_ptr;
            ++ballCountOut;
        }
    }
}
