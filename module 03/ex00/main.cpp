/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:57:33 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/27 22:05:14 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap claptrap("RoboWarrior");
    
    claptrap.attack("EvilBot");
    claptrap.takeDamage(0);
    claptrap.beRepaired(2);
    
    claptrap.takeDamage(9);
    claptrap.beRepaired(2);
    
    claptrap.takeDamage(10);
    claptrap.attack("EvilBot");

	Robert.beRepaired(0);

	Jubileus.attack("Robert");
	Robert.takeDamage(0);

	return (0);
    return 0;
}