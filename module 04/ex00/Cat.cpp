#include "Cat.hpp"

Cat::Cat() { type = "Cat"; }

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
