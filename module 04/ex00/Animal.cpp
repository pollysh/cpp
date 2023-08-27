#include "Animal.hpp"


Animal::Animal() : type("Unknown") {}


Animal::Animal(const Animal& other) {
    type = other.type;
}


Animal& Animal::operator=(const Animal& other) {
    if (this != &other) { 
        type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Generic animal sound." << std::endl;
}

std::string Animal::getType() const {
    return type;
}
