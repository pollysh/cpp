#include "Animal.hpp"

Animal::Animal() : type("Unknown") {}

Animal::~Animal() {
    std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Generic animal sound." << std::endl;
}

std::string Animal::getType() const {
    return type;
}
