#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
    // Default values for FragTrap
    HitPoints = 100;  // Example value
    EnergyPoints = 50;  // Example value
    AttackDamage = 20;  // Example value
    std::cout << "A default FragTrap has been created!" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
    : ClapTrap(name) 
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap named " << Name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
    : ClapTrap(other) 
{
    HitPoints = other.HitPoints;
    EnergyPoints = other.EnergyPoints;
    AttackDamage = other.AttackDamage;
    std::cout << "FragTrap named " << Name << " has been created by copying!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) 
{
    if (this != &other) {
        ClapTrap::operator=(other);
        HitPoints = other.HitPoints;
        EnergyPoints = other.EnergyPoints;
        AttackDamage = other.AttackDamage;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap named " << Name << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << Name << " requests a high five!" << std::endl;
}
