#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap claptrap("RoboWarrior");
    
    claptrap.attack("EvilBot");
    claptrap.takeDamage(0);
    claptrap.beRepaired(2);
    
    claptrap.takeDamage(9);
    claptrap.beRepaired(2);
    
    claptrap.takeDamage(10);
    claptrap.attack("EvilBot");

    return 0;
}