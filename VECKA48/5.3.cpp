#include <vector>
#include <stdexcept>
#include <iostream>

int getValue(int index) {
    std::vector<int> values {11,22,33,44,55,6};
    if(index > 5 || index < 0) {
        throw std::out_of_range("Felaktigt index angivet");
    }
    
    return values[index];
}

int main() {

    try {
        int val = getValue(10);
    }
    catch(std::out_of_range &ab) {
        std::cerr << ab.what() << std::endl;
        //std::cerr << "Shutting down..." << std::endl;
    }

    return 0;
}