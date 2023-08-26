/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:54:24 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:54:25 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack(void);

	private:
		std::string name;
		Weapon *weapon;
};

#endif