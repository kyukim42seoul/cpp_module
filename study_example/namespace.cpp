#include <iostream>

namespace A_space
{
	int	a;
}

class example
{
	public:
		static int	a;
};

int	a;

int	example::a = 20;

int	main()
{
	example	object;
	int	a;

	a = 5;
	::a = 10;
	A_space::a = 15;
	std::cout << a << std::endl;
	std::cout << ::a << std::endl;
	std::cout << A_space::a << std::endl;
	std::cout << example::a << std::endl;

	return (EXIT_SUCCESS);
}