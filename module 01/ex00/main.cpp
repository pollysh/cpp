/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:53:31 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:53:33 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("Zombie One");
	Zombie	*zombie2 = newZombie("Zombie Two");

	randomChump("Chump Zombie");
	delete zombie2;
	return (0);
}