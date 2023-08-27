#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int size = 10;
    AAnimal* animals[size];

    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }

    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }

    // Dog and Cat deep copy testing
    Dog originalDog;
    Dog copiedDog = originalDog;

    std::cout << "Original Dog's Brain address: " << originalDog.getBrainAddress() << std::endl;
    std::cout << "Copied Dog's Brain address: " << copiedDog.getBrainAddress() << std::endl;

    Cat originalCat;
    Cat copiedCat = originalCat;

    std::cout << "Original Cat's Brain address: " << originalCat.getBrainAddress() << std::endl;
    std::cout << "Copied Cat's Brain address: " << copiedCat.getBrainAddress() << std::endl;

    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    //AAnimal anAnimal;
    return 0;

    delete j;
    delete i;

    return 0;
}
