#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Ready Objects ----- -----\n" << std::endl;

	Bureaucrat	junior("junior", 150);
	Bureaucrat	senior("senior", 30);
	Bureaucrat	master("master", 1);
	ShrubberyCreationForm	SA("home");
	RobotomyRequestForm		RA("Jin");
	PresidentialPardonForm	PA("Nao");

	std::cout << "\n----- ----- Let's Sign ----- -----\n" << std::endl;

	junior.signForm(SA);
	junior.signForm(RA);
	junior.signForm(PA);
	senior.signForm(SA);
	senior.signForm(RA);
	senior.signForm(PA);
	master.signForm(SA);
	master.signForm(RA);
	master.signForm(PA);

	std::cout << "\n----- ----- Let's Excute ----- -----\n" << std::endl;

	junior.excuteForm(SA);
	junior.excuteForm(RA);
	junior.excuteForm(PA);
	senior.excuteForm(SA);
	senior.excuteForm(RA);
	senior.excuteForm(PA);
	master.excuteForm(SA);
	master.excuteForm(PA);

	std::srand(std::time(NULL));
	for (int count = 0; count < 10; count++)
	{
		master.excuteForm(RA);
	}

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return 0;
}
