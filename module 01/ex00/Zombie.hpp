/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:53:50 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:53:51 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private: 
		const std::string	_name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	announce( void ) const;

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif