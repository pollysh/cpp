#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

#include <iostream>
#include <map>
#include <string>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std::string level);
};

#endif