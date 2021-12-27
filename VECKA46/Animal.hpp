#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream> 
#include <fstream>
#include <vector>
class Animal {
private: 
    std::string species; // art
    int am_legs; // hur många ben
    std::string eats; // allätare, växtätare eller köttätande
    std::string sound; // Läte
    std::string color; // Vilken färg djuret är
    std::string genus; // släkte

public:
    Animal(std::string species, int am_legs, std::string eats, 
            std::string sound, std::string color, std::string genus);
    Animal();
    Animal& operator=(const Animal &other);
    bool operator==(const Animal &other);

    Animal(std::string filename); // input from file
    const void roar() const;
    const void eat() const;
    const void info() const;

    friend std::ostream& operator<<(std::ostream &os, const Animal &ani); 

};

// std::ostream& operator<<(std::ostream &os, const Animal &ani); 

#endif // ANIMAL_HPP