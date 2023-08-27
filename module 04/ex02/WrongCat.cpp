#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original) {}

WrongCat& WrongCat::operator=(const WrongCat &to_copy) {
    if (this != &to_copy) {
        WrongAnimal::operator=(to_copy);
    }
    return *this;
}

WrongCat::~WrongCat() {}

void WrongCat::makeSound() const {
    std::cout << "Wrong cat sound." << std::endl;
}
