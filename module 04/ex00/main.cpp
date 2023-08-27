#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/*
int main() {
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    wrongI->makeSound();
    wrongMeta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongI;

    return 0; 
}

*/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << "Testing getType():" << std::endl;
    std::cout << j->getType() << std::endl; 
    std::cout << i->getType() << std::endl; 

    std::cout << "\nTesting makeSound():" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    wrongI->makeSound();
    wrongMeta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongI;

    return 0; 
}
