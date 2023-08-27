#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
protected:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &to_copy);
	Brain &operator=(const Brain &to_copy);
    ~Brain();
};


#endif
