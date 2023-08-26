/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:57:33 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:57:34 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap Jubileus("Jubileus");
	ClapTrap Robert("Robert");

	Jubileus.attack("Robert");
	Robert.takeDamage(0);

	Jubileus.attack("Robert");
	Robert.takeDamage(0);

	Jubileus.attack("Robert");
	Robert.takeDamage(0);

	Robert.beRepaired(0);

	Jubileus.attack("Robert");
	Robert.takeDamage(0);

	return (0);
}
