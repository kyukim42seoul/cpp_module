#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	hoakin("hoakin", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	hoakin("hoakin", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	hoakin("hoakin", 150);
		std::cout << hoakin << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	return (EXIT_SUCCESS);
}
