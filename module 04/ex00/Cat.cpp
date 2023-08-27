#include "Cat.hpp"

Cat::Cat() { type = "Cat"; }

Cat::Cat(const Cat& other) : Animal(other) {}

Cat& Cat::operator=(const Cat& other) {
    Animal::operator=(other);
    return *this;
}

Cat::~Cat() {}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
