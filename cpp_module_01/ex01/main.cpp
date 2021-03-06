#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	std::string 		s_input;
	std::stringstream	ss_input;
	int					zombie_count;
	Zombie				*horde;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	s_input = argv[1];
	ss_input.str(s_input);
	ss_input >> zombie_count;
	horde = zombieHorde(zombie_count, "Heaps");
	testZombies(zombie_count, horde);
	delete[] horde;
	return (EXIT_SUCCESS);
}
