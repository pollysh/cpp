#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
	
}

void	HumanB::attack( void ) const
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with his "
				<< (*(this->_weapon)).getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " tries to attack but has no weapon "
					<< std::endl;
	}
	
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}