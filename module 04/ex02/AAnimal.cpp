#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Unknown") {}


AAnimal::AAnimal(const Animal& other) {
    type = other.type;
}


AAnimal& AAnimal::operator=(const AAnimal& other) {
    if (this != &other) { 
        type = other.type;
    }
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called." << std::endl;
}

void AniAAnimalmal::makeSound() const {
    std::cout << "Generic animal sound." << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}
