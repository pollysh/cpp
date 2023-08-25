#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongUnknown") {}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Wrong generic animal sound." << std::endl;
}
