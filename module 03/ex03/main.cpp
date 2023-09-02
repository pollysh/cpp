#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    
    // Creation of Objects
    ClapTrap clap("BasicTrap");
    FragTrap frag("Fraggy");
    ScavTrap scav("Scavvy");
    DiamondTrap diamond("Diamondy");
    
    std::cout << "\n--- Attacking ---" << std::endl;
    clap.attack("target1");
    frag.attack("target2");
    scav.attack("target3");
    diamond.attack("target4"); 

    std::cout << "\n--- Diamond Identity ---" << std::endl;
    diamond.whoAmI();

    std::cout << "\n--- Taking Damage ---" << std::endl;
    clap.takeDamage(10);
    frag.takeDamage(15);
    scav.takeDamage(20);
    diamond.takeDamage(25);

    std::cout << "\n--- Repairing ---" << std::endl;
    clap.beRepaired(5);
    frag.beRepaired(7);
    scav.beRepaired(8);
    diamond.beRepaired(10);

    std::cout << "\n--- Copy and Assignment Operations ---" << std::endl;
    DiamondTrap diamondCopy(diamond);
    DiamondTrap diamondAssigned = diamond;

    diamondCopy.whoAmI();
    diamondAssigned.whoAmI();

    return 0;
}
