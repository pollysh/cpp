#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal& other);                     // Copy constructor
    Animal& operator=(const Animal& other);           // Copy assignment operator
    virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};

#endif
