#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;

	Bureaucrat	hoakin("hoakin", 30);
	Bureaucrat	tom("tom", 10);
	Form		form("TexBill", false, 20, 40);

	std::cout << "\n----- ----- Before ----- -----\n" << std::endl;

	std::cout << form << std::endl;

	std::cout << "\n----- ----- Try Sign ----- -----\n" << std::endl;

	hoakin.signForm(form);
	tom.signForm(form);

	std::cout << "\n----- ----- After ----- -----\n" << std::endl;

	std::cout << form << std::endl;

	return (EXIT_SUCCESS);
}
