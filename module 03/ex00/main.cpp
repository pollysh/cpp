#include "ClapTrap.hpp"
#include <iostream>

int main() {

    std::cout << "\n--- ClapTrap Testing: RoboWarrior ---" << std::endl;
    
    ClapTrap claptrap("RoboWarrior");
    
    claptrap.attack("EvilBot");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);
    
    std::cout << "\n--- Damages and Repairs Phase 2 ---" << std::endl;
    
    claptrap.takeDamage(9);
    claptrap.beRepaired(2);
    
    std::cout << "\n--- Final Test ---" << std::endl;

    claptrap.takeDamage(10);
    claptrap.attack("EvilBot");

    std::cout << "\n--- End of ClapTrap Testing ---\n" << std::endl;

    return 0;
}
