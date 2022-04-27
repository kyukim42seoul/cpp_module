#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	hoakin("hoakin");
	hoakin.setGrade(15);

	Bureaucrat	copy_hoakin(hoakin);

	std::cout << hoakin << std::endl;
	std::cout << copy_hoakin << std::endl;

	return (EXIT_SUCCESS);
}
