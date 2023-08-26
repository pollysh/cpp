/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:53:56 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:53:57 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	count;

	count = 30;
	Zombie *zombies = zombieHorde(count, "LoudZombie");
	for (int i = 0; i < count; i++)
		zombies[i].announce();
	delete [] zombies;
}