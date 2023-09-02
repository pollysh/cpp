#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const std::string &n)
    : ClapTrap(n + "_clap_name"), FragTrap(n), ScavTrap(n) {
    this->name = n;
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other.ClapTrap::Name), FragTrap(other), ScavTrap(other) {
    this->name = other.name;
    HitPoints = other.HitPoints;  
    EnergyPoints = other.EnergyPoints; 
    AttackDamage = other.AttackDamage; 
    
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        this->name = other.name;
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap Name: " << this->name << std::endl;
    std::cout << "ClapTrap Name: " << this->ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target); 
}
