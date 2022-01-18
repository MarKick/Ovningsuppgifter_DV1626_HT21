#include <iostream>
#include <math.h>
#include <vector>

std::string int_to_string(int integer) {
    
    int nDigit; // antal siffror i talet

    if (integer != 0) {  
        // log10(x) är endast definerat för x > 0, ty varför vi behöver if-satsen
        nDigit = abs(nDigit); // Få absolut beloppet av talet
        nDigit = log10(nDigit); // Få 10 logaritmen av talet
        nDigit = floor(nDigit) + 1; // avrunda nedåt och addera 1. 
    }
    else {
        nDigit = 1;
    }
    
    // skapar heap allokerad array med nDigit+1 antal platser, +1 för att \0 alltid ska få plats
    char* char_arr = new char[nDigit + 1];

    std::sprintf(char_arr, "%d", integer); // sprintf formaterar integern till en char array
    
    // kallar på strings konstruktor och skapar en string utifrån char arrayen
    // Under huven är en std::string en char-array
    std::string converted(char_arr); 
    
    delete[] char_arr; // free memory allocated for the array

    return converted;

}

int main() {

    std::vector<int> integers = {98724234, 5, 123124124, 0, -67341234, 19123, -31231, 254134134};
    std::string converted; 
    for (int i = 0; i < integers.size(); ++i) {
        converted = int_to_string(integers[i]);
        std::cout << converted << std::endl; // För att bevisa att rätt svar har funnits
    }

    return 0;
}
