#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap named " << Name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap named " << Name << " has been destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << Name << " throws a rock at " << target 
              << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " has entered Gate keeper mode!" << std::endl;
}
