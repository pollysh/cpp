#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &to_copy);
    Animal &operator=(const Animal &to_copy);
    virtual ~Animal();

    virtual void makeSound() const;
    void setType(std::string type);
    std::string getType() const;
};


#endif
