#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Test ClapTrap
    ClapTrap clap1("R2D2");
    ClapTrap clap2("C3PO");

    clap1.attack("C3PO");
    clap2.takeDamage(0);
    clap2.beRepaired(3);
    clap1.takeDamage(10);
    clap1.attack("C3PO");
    clap2.takeDamage(10);
    clap2.beRepaired(5);

    // Test ScavTrap
    ScavTrap scav("WALL-E");
    scav.attack("EVE");
    scav.guardGate();
    scav.takeDamage(30);
    scav.beRepaired(10);

    return 0;
}
