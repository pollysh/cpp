#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain()) {
    std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {}

Cat& Cat::operator=(const Cat& other) {
    if(this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called." << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrainAddress() const {
    return brain;
}
