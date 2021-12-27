#include "Duck.hpp"
#include "Cat.hpp"

int main() {
    Duck boris(3000, 34.32, "orange", 2);
    Cat catnis(20, 12.32, "red", 4);

    boris.info();
    std::cout << std::endl;
    catnis.info();
    std::cout << std::endl;

    Animal* myAnimal1;
    Animal* myAnimal2;
    Animal* myAnimal3;
    Animal* myAnimal4;
    Animal* myAnimal5;

    /* Task 23 */
    myAnimal1 = new Duck(300, 33.32, "black", 2);
    myAnimal2 = new Cat(10, 40.45, "Brown", 4);
    myAnimal3 = new Duck(4500, 50.12, "brown", 2);
    myAnimal4 = new Duck(2300, 25, "Yellow", 2);
    myAnimal5 = new Duck(1000, 10, "Yellow", 2);
    myAnimal3->info();

    /*
        Task 24
    */
    Animal** front_yard_animals = new Animal*[5] {myAnimal5, myAnimal4, myAnimal3, myAnimal2, myAnimal1};

    int m_ducks = 0;
    int m_cats = 0;

    for(int i = 0; i < 5; ++i) {
        if(dynamic_cast<Cat*>(front_yard_animals[i]) != nullptr) {
            m_cats++;
        }
        else if(dynamic_cast<Duck*>(front_yard_animals[i]) != nullptr) {
            m_ducks++;
        }
    }
    printf("Amount of ducks: %d Amount of cats: %d\n", m_ducks, m_cats);
}