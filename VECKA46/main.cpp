#include "Animal.hpp"
#include "Zoo.hpp"

int main() {

    // 2.)
    Animal dog("C. familiaris", 4, "Allätare", "WOooFF", "Brown", "Canis");
    Animal giraff("Giraffa", 4, "Växtätare", "Auhhuuuaa", "Yellow", "Giraffa");
    Animal cat("F. Catus", 4, "Allätare", "Meow", "Orange", "Felis");

    // 3.)
    // Animal fox;
    // fox.info();

    // 4.) 
    Animal elk("elk.txt");
    // elk.info();
    // elk.roar();
    // elk.eat();

    // 5.) Heap allocation of objects. Using all three constructors
    Animal *rhino1 = new Animal("rhino.txt");
    Animal *rhino2 = new Animal("Black rhino", 4, "Växtätare", "MUU", "Grey", "Rhinoseros");
    // Animal *rhino3 = new Animal();
    // rhino1->info();
    // rhino2->info();
    // rhino3->info();

    // 6.) Heap allokerad flock av djur
    Animal** rhino_flock = new Animal*[3];
    rhino_flock[0] = rhino1;
    rhino_flock[1] = rhino2;
    // rhino_flock[2] = rhino3;

    rhino_flock[0]->info();

    /*
        TASK 8!!!
    */
    std::cout << dog;

    giraff = dog;
    std::cout << giraff;
    if(giraff == dog) {
        std::cout << "Equal to operator overload works!" << std::endl;
    }

    /*
        TASK 9!!!
    */

    std::vector <Animal> group;
    group.push_back(elk);
    group.push_back(dog);
    group.push_back(giraff);

    Zoo zoo(group);
    zoo.listAnimals();
    zoo.addAnimal(cat);
    zoo.removeAnimal(dog);
    zoo.listAnimals();

    delete rhino1;
    delete rhino2;
    // delete rhino3;

    return 0;
}