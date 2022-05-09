#include "Conversion.hpp"

int	main(int argc, char *argv[])
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;

	if (argc != 2)
	{
		std::cout << "Invalid number of Arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	Conversion	converter(argv[1]);
	std::cout << converter << std::endl;

	std::cout << "\n----- ----- TEST : inf ----- -----\n" << std::endl;
	Conversion	B("inf");
	std::cout << B << std::endl;

	std::cout << "\n----- ----- TEST : -inf ----- -----\n" << std::endl;
	Conversion	MB("-inf");
	std::cout << MB << std::endl;

	std::cout << "\n----- ----- TEST : +inf ----- -----\n" << std::endl;
	Conversion	PB("+inf");
	std::cout << PB << std::endl;

	std::cout << "\n----- ----- TEST : nan ----- -----\n" << std::endl;
	Conversion	C("nan");
	std::cout << C << std::endl;

	std::cout << "\n----- ----- TEST : empty string ----- -----\n" << std::endl;
	Conversion	D("");
	std::cout << D << std::endl;

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (EXIT_SUCCESS);
}
