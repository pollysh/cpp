#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& original);      
    WrongAnimal& operator=(const WrongAnimal& to_copy);
    virtual ~WrongAnimal();

    virtual void makeSound() const;
};

#endif
