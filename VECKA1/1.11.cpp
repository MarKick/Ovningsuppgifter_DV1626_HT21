
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#define IN "lorem.txt"
#define OUT "test.txt"

int main() {

    std::string line;
    std::string write_row;
    std::vector<std::string> write_file;  
    char prev;
    size_t pos;
    
    std::ifstream infile (IN);
    std::ofstream outfile (OUT);

    if (infile.is_open()) {
        // get line by line from file
        while (getline(infile, line)){
            write_row = ""; // reset the row to be written
            // A string is an array of chars
            // Therefore we are able to iterate through every char in the array
            for(char &c : line) {
                if((c == ' ' && prev == ' ') || c == '\t') {
                    continue; 
                }
                else {
                    // string suports to add a char to the end of a string 
                    write_row.push_back(c);
                }
                prev = c;
            }
            write_file.push_back(write_row);
        }
        infile.close();
    }
    else {
        std::cout << "Could not open file:\n" << IN << std::endl;
        return 1;
    }

    if (outfile.is_open()) {
        for(int i = 0; i < write_file.size(); ++i) {
            outfile << write_file[i];
        }
    }
    else {
        std::cout << "Could not open file:\n" << OUT << std::endl;
        return 1;
    }

    std::cout << std::endl;

    return 0;
}
