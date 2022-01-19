#ifndef BASKET_HPP
#define BASKET_HPP

#include "Ball.hpp"

class Basket {
private:
    Ball* m_balls;
    int m_size; // Keep track of how many balls in the array
    int capacity; // How much memory allocated
public:
    Basket() = delete;
    Basket(int capacity);
    ~Basket();
    Basket(const Basket& other);
    Basket& operator=(const Basket& other);
    void addBall(const Ball& ball);
    void addBall(Balltype type, float radius, Color color);
    void RemoveBalls(const Ball& ball);
    void RemoveBalls(Balltype type, float radius, Color color);
    int getBallCount();
    void getBallsofType(Balltype type, Ball*& outArray, int& ballCountOut);
    void getBallsColor(Color color, Ball*& outArray, int& ballCountOut);
    void getBallsofVolume(float minVolume, float maxVolume, Ball*& outArray, int& ballCountOut);

};

#endif // BASKET_HPP
