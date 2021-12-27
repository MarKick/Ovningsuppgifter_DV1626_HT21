#include "Cat.hpp"

Cat::Cat(int m_stripes, float tail_len, std::string eye_color, int m_legs) : 
        Animal(m_legs), m_stripes(m_stripes), tail_len(tail_len), eye_color(eye_color) {
}

const void Cat::roar() const {
    std::cout << "MEOWWW" << std::endl;
}

const void Cat::eat() const {
    std::cout << "This cat eats fish and birds exclusively!" << std::endl;
}

const void Cat::info() const {
    std::cout << "Info about the Cat:" << std::endl;
    std::cout << "Amount of stripes: " << this->m_stripes << std::endl;
    std::cout << "Length of tail: " << this->tail_len << std::endl; 
    std::cout << "The cats eye color: " << this->eye_color << std::endl;
    std::cout << "The cat has " << this->m_legs << " legs." << std::endl; 
}