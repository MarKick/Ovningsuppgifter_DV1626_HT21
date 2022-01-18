#include "DynBasketArr.hpp"
#include "Ball.hpp"
int main() {
    
    Ball obj;
    Ball var;
    Basket bas(20);

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
    
    int capacity = 10;
    Ball** Footballs = new Ball*[capacity];
    Ball** LargeBalls = new Ball*[capacity];
    int size; 
    
    bas.getBallsofType(Balltype::football, Footballs, size);
    
    bas.getBallsofVolume(10.00,4000, LargeBalls, size);
    obj = var; 

    for (int i = 0; i < capacity; ++i) {
        delete Footballs[i];
        delete LargeBalls[i];
    }
    delete[] Footballs;
    delete[] LargeBalls;
    return 0;
}
