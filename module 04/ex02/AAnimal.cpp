#include "AAnimal.hpp"

AAnimal::AAnimal() : type("") {}

AAnimal::~AAnimal() {
}

void AAnimal::makeSound() const {
    std::cout << "Generic animal sound." << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}
