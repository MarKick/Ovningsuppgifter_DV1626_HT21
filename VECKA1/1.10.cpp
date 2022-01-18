#include <iostream>
#include <fstream>

int main() {
    std::string line;
    // Get input from user
    std::ifstream myfile ("little_red.txt");
    if(myfile.is_open()) {
        while(getline(myfile, line)) {
            if(line.length() > 80) {
                std::cout << line << std::endl;
            }
        }
        myfile.close();
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }
    return 0;

}
