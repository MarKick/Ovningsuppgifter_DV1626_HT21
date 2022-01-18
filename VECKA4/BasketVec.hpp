#ifndef BASKET_HPP
#define BASKET_HPP

#include "Ball.hpp"
#include <vector>

class Basket {
private:
    std::vector<Ball> m_balls;
public:
    Basket() = default;
    ~Basket() = default;
    Basket(const Basket& other);
    Basket& operator=(const Basket& other);
    void addBall(const Ball& ball);
    void addBall(Balltype type, float radius, Color color);
    void RemoveBalls(const Ball& ball);
    void RemoveBalls(Balltype type, float radius, Color color);
    int getBallCount();
    void getBallsofType(Balltype type, std::vector<Ball>& outVector);
    void getBallsColor(Color color, std::vector<Ball>& outVector);
    void getBallsofVolume(float minVolume, float maxVolume, std::vector<Ball>& outVector);

};

#endif // BASKET_HPP
