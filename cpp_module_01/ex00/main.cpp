#include "Zombie.hpp"

int	main()
{
	Zombie	*heap_zombie;

	heap_zombie = newZombie("heap");
	randomChump("stack");
	delete heap_zombie;
	return (EXIT_SUCCESS);
}
