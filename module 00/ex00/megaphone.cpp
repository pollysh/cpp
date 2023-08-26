/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:14:44 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/15 14:14:46 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string const msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::string str;

	if (ac == 1)
		std::cout << msg;
	for (int i = 1; i < ac; i++)
	{
		str = av[i];
		int	len = str.length();
		for (int j = 0; j < len; j++)
		{
			std::cout << (char)(toupper(str[j]));
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}