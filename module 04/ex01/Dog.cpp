#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain()) {
    std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {}

Dog& Dog::operator=(const Dog& other) {
    if(this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Cat destructor called." << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrainAddress() const {
    return brain;
}
