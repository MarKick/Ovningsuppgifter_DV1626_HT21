#include <iostream>

int main() {
    char a = '3';
    float b = a+0.7;
    b += 2;
    int c = b;
    
    std::cout << a << '\t' << b << '\t' << c << '\n';

}
