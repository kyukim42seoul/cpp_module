#include "Harl.hpp"

int	main()
{
	Harl	tester;

	std::cout << "Debug" << std::endl;
	tester.complain("DEBUG");
	std::cout << "Info" << std::endl;
	tester.complain("INFO");
	std::cout << "Warning" << std::endl;
	tester.complain("WARNING");
	std::cout << "Error" << std::endl;
	tester.complain("ERROR");
	std::cout << "Invalid" << std::endl;
	tester.complain("AAA");
	std::cout << "Debug" << std::endl;
	tester.complain("DEBUG");
	std::cout << "Empty" << std::endl;
	tester.complain("");
	std::cout << "END" << std::endl;
	return (EXIT_SUCCESS);
}
