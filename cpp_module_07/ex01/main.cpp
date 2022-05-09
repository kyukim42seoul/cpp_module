#include "iter.hpp"
#include <iostream>

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;

	std::string	preset[5] = {"hello", "hi", "a", "b", "c"};
	int	intArray[5] = {0, 1, 2, 3, 4};

	::iter(preset, 5, ::print);
	::iter(intArray, 5, ::print);

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (EXIT_SUCCESS);
}
