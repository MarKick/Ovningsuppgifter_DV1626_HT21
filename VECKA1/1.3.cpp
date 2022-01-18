#include <iostream>

int main() {
    std::string input;

    std::cout << "Please enter your name: ";
    std::cin >> input;

    // Om en hel rad vill inmatas
    // getline(std::cin, input);

    std::cout << "Hello " << input << std::endl;
    


    return 0;
 }
