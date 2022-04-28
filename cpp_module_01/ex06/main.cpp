#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	harl_filter;

	if (argc != 2)
	{
		std::cout << "[ERR] incorrect number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	harl_filter.complain(argv[1]);
	return (EXIT_SUCCESS);
}
