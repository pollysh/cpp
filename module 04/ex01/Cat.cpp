#include "Cat.hpp"

Cat::Cat() { 
    brain = new Brain();
    type = "Cat"; 
}

Cat::Cat(const Cat& other)
{
    brain = new Brain(*other.brain); //Deep copy
    type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        type = other.type;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat(){
    delete brain;
}
