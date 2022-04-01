#include <iostream>

int	main()
{
	int	a = 5;
	int	&ref_a = a;

	std::cout << a << std::endl;
	std::cout << ref_a << std::endl;

	return (EXIT_SUCCESS);
}