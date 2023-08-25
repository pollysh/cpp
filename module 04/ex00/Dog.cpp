#include "Dog.hpp"

Dog::Dog() { type = "Dog"; }

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
