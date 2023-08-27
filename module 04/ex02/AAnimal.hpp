#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal {
protected:
    std::string type;

public:
    AAnimal();
    AAnimal(const AAnimal &to_copy);
    AAnimal &operator=(const AAnimal &to_copy);
    virtual ~AAnimal();

    virtual void makeSound() const = 0;
    void setType(std::string type);
    std::string getType() const;
};


#endif
