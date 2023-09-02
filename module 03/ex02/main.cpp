#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    std::cout << "\n--- ClapTrap Testing ---" << std::endl;
    
    ClapTrap clap1("R2D2");
    ClapTrap clap2("C3PO");
    
    clap1.attack("C3PO");
    clap2.takeDamage(0);
    clap2.beRepaired(3);
    clap1.takeDamage(10);
    clap1.attack("C3PO");
    clap2.takeDamage(10);
    clap2.beRepaired(5);
    
    std::cout << "\n--- ScavTrap Testing ---" << std::endl;

    ScavTrap scav("WALL-E");
    scav.attack("EVE");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(10);

    std::cout << "\n--- FragTrap Testing ---" << std::endl;

    FragTrap frag("Johnny 5");
    frag.attack("Decepticon");
    frag.highFivesGuys();
    frag.takeDamage(25);
    frag.beRepaired(15);

    return 0;
}
