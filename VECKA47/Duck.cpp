#include "Duck.hpp"

Duck::Duck(int m_feathers, double beek_len, std::string beek_color, int m_legs) : 
    Animal(m_legs), m_feathers(m_feathers), beek_len(beek_len), beek_color(beek_color) {}

const void Duck::roar() const {
    std::cout << "KWACK!" << std::endl;
}

const void Duck::eat() const {
    std::cout << "The duck eats bread crumbs" << std::endl;
}

const void Duck::info() const {
    std::cout << "Info about the duck:" << std::endl;
    std::cout << "Amount of feathers: " << this->m_feathers << std::endl;
    std::cout << "Beek length: " << this->beek_len << std::endl; 
    std::cout << "Beek color: " << this->beek_color << std::endl;
    std::cout << "The duck has " << this->m_legs << " legs." << std::endl;
}