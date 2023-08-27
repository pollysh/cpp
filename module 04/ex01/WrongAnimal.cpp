#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown") {}

WrongAnimal::WrongAnimal(const WrongAnimal& original) : type(original.type) {} 

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& to_copy) {
    if (this != &to_copy) {
        type = to_copy.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {}

void WrongAnimal::makeSound() const {
    std::cout << "Wrong animal sound." << std::endl;
}
