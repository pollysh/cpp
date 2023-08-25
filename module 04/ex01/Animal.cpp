#include "Animal.hpp"

Animal::Animal() : type(""), brain(new Brain()) {}

Animal::~Animal() {
    delete brain;
}

void Animal::makeSound() const {
    std::cout << "Generic animal sound." << std::endl;
}

std::string Animal::getType() const {
    return type;
}
