#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "A default ScavTrap has been created!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap named " << Name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) 
    : ClapTrap(other) {
    HitPoints = other.HitPoints;
    EnergyPoints = other.EnergyPoints;
    AttackDamage = other.AttackDamage;
    std::cout << "ScavTrap named " << Name << " has been created by copying!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        HitPoints = other.HitPoints;
        EnergyPoints = other.EnergyPoints;
        AttackDamage = other.AttackDamage;
    }
    return *this;
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
