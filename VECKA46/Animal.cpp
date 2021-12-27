#include "Animal.hpp"

Animal::Animal(std::string species, int am_legs, std::string eats, 
            std::string sound, std::string color, std::string genus) {
    this->species = species; 
    this->am_legs = am_legs;
    this->eats = eats;
    this->sound = sound;
    this->color = color;
    this->genus = genus;
}

Animal::Animal() {
    /*
     *  Take input from user    
    */
    std::cout << "Please enter species, amount of legs, what it eats, it's sound, color and genus:" << std::endl;
    std::cin >> species >> am_legs >> eats >> sound >> color >> genus;
}

Animal::Animal(std::string filename) {
    /*
     *  LÄser in värden från file
     *  OBS! Knappt någon felhantering 
    */
    std::string line;
    std::vector<std::string> input_lines;

    std::ifstream inpfile (filename); // input file
    if(!inpfile.is_open()) {
        std::cerr << "File can not be found" << std::endl;
    }
    else {
        while(getline(inpfile, line)) {
                input_lines.push_back(line);
        }

        // not the best sollution but it works
        this->species = input_lines[0]; 
        this->am_legs = std::stoi(input_lines[1]);
        this->eats = input_lines[2];
        this->sound = input_lines[3];
        this->color = input_lines[4];
        this->genus = input_lines[5];
    }
}

Animal& Animal::operator=(const Animal &other) {
    this->species = other.species;
    this->am_legs = other.am_legs;
    this->eats = other.eats;
    this->sound = other.sound;
    this->color = other.color;
    this->genus = other.genus;
    return *this;
}

bool Animal::operator==(const Animal &other) {
    return (species == other.species && am_legs == other.am_legs && eats == other.eats &&
        sound == other.sound && color == other.color && genus == other.genus);
}

const void Animal::roar() const {
    std::cout << this->sound << std::endl;
}

const void Animal::eat() const {
    std::cout << this->eats << std::endl;

}

const void Animal::info() const {   
    std::cout << "Art: " << this->species << std::endl;
    std::cout << "Släkte: " << this->genus << std::endl;
    std::cout << "Färg på djuret: " << this->color << std::endl;
    std::cout << "Antal ben: " << this->am_legs << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Animal &ani) {
    os << "Art: " << ani.species << std::endl;
    os << "Släkte: " << ani.genus << std::endl;
    os << "Färg på djuret: " << ani.color << std::endl;
    os << "Antal ben: " << ani.am_legs << std::endl;
    return os;
}
