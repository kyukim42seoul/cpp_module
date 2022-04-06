#include "Zombie.hpp"

int	main()
{
	Zombie	*heap_zombie;

	heap_zombie = newZombie("heap");
	delete heap_zombie;
	randomChump("stack");
	return (EXIT_SUCCESS);
}
