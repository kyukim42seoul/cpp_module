#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde_zombie;

	horde_zombie = new Zombie[N];
	for (int index = 0; index < N; index++)
	{
		horde_zombie[index].setName(name);
		horde_zombie[index].setNumber(index);
	}
	return (horde_zombie);
}

void	testZombies(int N, Zombie *zombieHorde)
{
	for (int index = 0; index < N; index++)
	{
		std::cout << zombieHorde[index].getNumber() << " : ";
		zombieHorde[index].announce();
	}
}
