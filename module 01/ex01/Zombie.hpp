#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private: 
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	setName(std::string new_name);
		void	announce( void );

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif