#include "Conversion.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid number of Arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		Conversion	converter(argv[1]);
		std::cout << converter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return (EXIT_SUCCESS);
}
