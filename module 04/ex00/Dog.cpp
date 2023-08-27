#include "Dog.hpp"

Dog::Dog() { type = "Dog"; }

Dog::Dog(const Dog& other) : Animal(other) {} 

Dog& Dog::operator=(const Dog& other) {
    Animal::operator=(other); 
    return *this;
}

Dog::~Dog() {}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
