/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:54:36 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:54:37 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private: 
		std::string	_type;

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &	getType(void);
        void		setType(std::string type);

};

#endif