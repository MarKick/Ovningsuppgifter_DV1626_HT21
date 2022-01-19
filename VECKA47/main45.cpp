#include "4.5.hpp"

int main() {
    
    Ball obj;
    Ball var;

    if (obj.getType() == Balltype::handball) {
        std::cout << "Handball!" << std::endl;
    } 

    if (obj.getColor() == Color::blue) {
        std::cout << "Blue!" << std::endl;
    } 

    std::cout << obj.getRadius() << std::endl;
    float volume = obj.getVolume();
    std::cout << volume << std::endl;

    if(obj == var) {
        std::cout << "Same!" << std::endl;
    }
    
    Ball third(Balltype::football, 4.13, Color::red);

    if(third != var) {
        std::cout << "Different!" << std::endl;
    }

    var = third;

    if(third == var) {
        std::cout << "Same!" << std::endl;
    }

    third.setRadius(34.21);

    if(third != var) {
        std::cout << "Different!" << std::endl;
    }
    return 0;
}
