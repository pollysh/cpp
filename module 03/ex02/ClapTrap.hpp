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
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &other);
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