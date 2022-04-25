#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>

int	main(int argc, char *argv[])
{
	std::stringstream	number(argv[1]);
	int		number_of_flock;
	number >> number_of_flock;
	Animal	flock_animals[number_of_flock];

	return(EXIT_SUCCESS);
}
