#include "Dog.hpp"

Dog::Dog() { 
    brain = new Brain();
    type = "Dog"; 

}

Dog::Dog(const Dog& other)
{
    brain = new Brain(*other.brain); //Deep copy
    type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        type = other.type;
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Dog::~Dog(){
    delete brain;
}