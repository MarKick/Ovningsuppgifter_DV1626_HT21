#ifndef ZOO_HPP
#define ZOO_HPP

#include "Animal.hpp"

class Zoo {
private:
    std::vector<Animal*> zoo_anim; // All the zoo animals

public:
    Zoo() = delete;
    Zoo(const std::vector<Animal> &animals);
    void addAnimal(const Animal &animal);
    void removeAnimal(const Animal &animal);
    void listAnimals();
};

#endif // ZOO_HPP