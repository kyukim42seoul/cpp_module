#include "Harl.hpp"

int	main()
{
	Harl	tester;

	std::cout << "Debug : ";
	tester.complain("DEBUG");
	std::cout << "Info : ";
	tester.complain("INFO");
	std::cout << "Warning : ";
	tester.complain("WARNING");
	std::cout << "Error : ";
	tester.complain("ERROR");
	std::cout << "Invalid : ";
	tester.complain("AAA");
	std::cout << "Debug : ";
	tester.complain("DEBUG");
	std::cout << "Empty : ";
	tester.complain("");
	std::cout << "END" << std::endl;
	return (EXIT_SUCCESS);
}
