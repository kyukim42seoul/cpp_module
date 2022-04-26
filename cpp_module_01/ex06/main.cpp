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
