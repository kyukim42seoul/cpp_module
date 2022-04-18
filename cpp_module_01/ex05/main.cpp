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

	tester.complain("DEBUG");
	tester.complain("INFO");
	tester.complain("WARNING");
	tester.complain("ERROR");
	return (EXIT_SUCCESS);
}