#include "Intern.hpp"
#include <ctime>

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Ready Objects ----- -----\n" << std::endl;

	Bureaucrat	junior("junior", 150);
	Bureaucrat	senior("senior", 30);
	Bureaucrat	master("master", 1);
	Intern		intern;
	Form*	pSA;
	Form*	pRA;
	Form*	pPA;

	std::cout << "\n----- ----- Make Forms ----- -----\n" << std::endl;

	pSA = intern.makeForm("ShrubberyCreationForm", "home");
	pRA = intern.makeForm("RobotomyRequestForm", "Jin");
	pPA = intern.makeForm("PresidentialPardonForm", "Nao");

	try
	{
		intern.makeForm("AAA", "aa");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n----- ----- Let's Sign ----- -----\n" << std::endl;

	junior.signForm(*pSA);
	junior.signForm(*pRA);
	junior.signForm(*pPA);
	senior.signForm(*pSA);
	senior.signForm(*pRA);
	senior.signForm(*pPA);
	master.signForm(*pSA);
	master.signForm(*pRA);
	master.signForm(*pPA);

	std::cout << "\n----- ----- Let's Excute ----- -----\n" << std::endl;

	junior.excuteForm(*pSA);
	junior.excuteForm(*pRA);
	junior.excuteForm(*pPA);
	senior.excuteForm(*pSA);
	senior.excuteForm(*pRA);
	senior.excuteForm(*pPA);
	master.excuteForm(*pSA);
	master.excuteForm(*pPA);

	std::srand(std::time(NULL));
	for (int count = 0; count < 10; count++)
	{
		master.excuteForm(*pRA);
	}

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return 0;
}
