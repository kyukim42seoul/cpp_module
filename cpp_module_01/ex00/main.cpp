#include "Zombie.hpp"

int	main()
{
	Zombie	*heap_zombie;

	heap_zombie = newZombie("Heap");
	randomChump("Stack");
	delete heap_zombie;
	return (EXIT_SUCCESS);
}
