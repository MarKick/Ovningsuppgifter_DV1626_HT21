#include <iostream>

int main() {

    float to_convert;
    float converted;

    std::cout << "Please enter the amount of Yen to be converted: ";
    std::cin >> to_convert;

    if(to_convert < 0) {
        std::cout << "Negative currencies are not allowed" << std::endl;
        // fprintf(stderr, "Negative currencies are not allowed\n");  
        return 1;
    }
    
    converted = to_convert / 112; // 1 dollar is equal to 112 Yen
    
    std::cout << to_convert << " Yen is equal to "<< converted << " Dollars!\n"<< std::endl;

    return 0;
}
