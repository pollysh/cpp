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