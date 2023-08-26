/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:57:41 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:57:42 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string Name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        int AttackDamage;

    public:
        ClapTrap(const std::string &name);
        // Getter methods
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;

        // Setter methods
        void setName(const std::string &name);
        void setHitPoints(int hp);
        void setEnergyPoints(int ep);
        void setAttackDamage(int damage);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ~ClapTrap();
};

#endif