#include "Zombie.hpp"

Zombie*	zombieHorde(int N, const std::string &name)
{
	Zombie	*horde_zombie;

	horde_zombie = new Zombie[N];
	std::cout << "zombieHorde : horde_zombie allocated" << std::endl;
	for (int index = 0; index < N; index++)
	{
		horde_zombie[index].set_number(index);
		horde_zombie[index].set_name(name);
	}
	return (horde_zombie);
}

void	test_zombieHorde(int zombie_count, Zombie *horde)
{
	for (int index = 0; index < zombie_count; index++)
	{
		std::cout << horde[index].get_number() << ' ';
		horde[index].announce();
	}
}
