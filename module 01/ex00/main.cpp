#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("Zombie One");
	Zombie	*zombie2 = newZombie("Zombie Two");

	randomChump("Chump Zombie");
	delete zombie2;
	return (0);
}