#include "Conversion.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid number of Arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	Conversion	converter(argv[1]);

	std::cout << converter << std::endl;

	return (EXIT_SUCCESS);
}
