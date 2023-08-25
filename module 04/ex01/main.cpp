#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int main() {
    const int size = 10; // Example size.
    Animal* animals[size];

    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }

    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }

    // Demonstrate deep copying.
    Dog originalDog;
    Dog copiedDog = originalDog; // Calls the copy constructor.
    copiedDog = originalDog;     // Calls the assignment operator.

    // Clean up.
    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }

    return 0;
}
