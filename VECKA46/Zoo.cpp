#include "Zoo.hpp"

Zoo::Zoo(const std::vector<Animal> &animals) {
    for(size_t i = 0; i < animals.size(); ++i) {
        addAnimal(animals[i]);
    }
}

void Zoo::addAnimal(const Animal &animal) {
    Animal* new_anim = new Animal(animal);
    zoo_anim.push_back(new_anim);
}

void Zoo::removeAnimal(const Animal &animal) {
    for (size_t i = 0; i < zoo_anim.size(); ++i)
    {
        if(*zoo_anim[i] == animal) {
            zoo_anim.erase(zoo_anim.begin() + i);
        }
    }
    
}

void Zoo::listAnimals() {
    for(size_t i = 0; i < zoo_anim.size(); ++i) {
        printf("Animal %ld: ", i); 
        std::cout << *zoo_anim[i] << std::endl;
    }
}