#include "BasketVec.hpp"
#include "Ball.hpp"
int main() {
    
    Ball obj;
    Ball var;
    Basket bas;

    Ball third(Balltype::football, 4.13, Color::red);
    third.setRadius(34.21);
    
    bas.addBall(obj);
    bas.addBall(var);
    bas.addBall(third);
    bas.addBall(Balltype::football, 23.52, Color::red);
    bas.addBall(Balltype::football, 2233.52, Color::blue);
    bas.addBall(Balltype::handball, 251.52, Color::green);
    std::cout << bas.getBallCount() << std::endl;
    
    bas.RemoveBalls(obj);
    std::cout << bas.getBallCount() << std::endl;
    
    std::vector<Ball> Footballs;
    bas.getBallsofType(Balltype::football, Footballs);
    std::cout << Footballs.size() << std::endl;
    std::vector<Ball> LargeBalls;
    bas.getBallsofVolume(10.00,4000, LargeBalls);
    obj = var; 
    return 0;
}
