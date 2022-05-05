#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Instantiate ----- -----\n" << std::endl;

	try
	{
		Bureaucrat	joe("joe", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	noa("noa", 151);
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

	std::cout << "\n----- ----- Increase ----- -----\n" << std::endl;

	Bureaucrat	toy("toy", 30);

	std::cout << toy << std::endl;

	try
	{
		toy.increaseGrade(25);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << toy << std::endl;

	try
	{
		toy.increaseGrade(10);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- ----- Increase ----- -----\n" << std::endl;

	Bureaucrat	joy("joy", 30);

	std::cout << joy << std::endl;

	try
	{
		joy.decreaseGrade(25);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << joy << std::endl;

	try
	{
		joy.decreaseGrade(120);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (EXIT_SUCCESS);
}
