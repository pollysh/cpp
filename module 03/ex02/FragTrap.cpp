/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:58:01 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:58:02 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name)
    : ClapTrap(name) 
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap named " << Name << " has been created!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap named " << Name << " has been destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    std::cout << "FragTrap " << Name << " throws a grenade at " << target 
              << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << Name << " requests a high five!" << std::endl;
}
