/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:57:27 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:57:28 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string &name) 
    : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap named " << Name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap named " << Name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if(HitPoints > 0 && EnergyPoints > 0) {
        std::cout << "ClapTrap " << Name << " attacks " << target 
                  << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    } else {
        std::cout << "ClapTrap " << Name << " has insufficient energy or hit points to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if(HitPoints < amount) {
        HitPoints = 0;
    } else {
        HitPoints -= amount;
    }
    std::cout << "ClapTrap " << Name << " takes " << amount 
              << " points of damage! Remaining hit points: " << HitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(EnergyPoints > 0) {
        HitPoints += amount;
        EnergyPoints--;
        std::cout << "ClapTrap " << Name << " repairs itself and gains " 
                  << amount << " hit points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << Name << " has insufficient energy to repair!" << std::endl;
    }
}
