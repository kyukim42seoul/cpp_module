#include "Harl.hpp"

/*
	void	complain(std::string level);
	에서 if /else if /else 금지
	pointer to member function 연습!
	테스트도 같이 제출
*/

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
