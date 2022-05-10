#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;

	srand(time(NULL));

	std::cout << "\n----- ----- 1st Vector ----- -----\n" << std::endl;

	Span	Data(10000);

	try
	{
		for (int count = 0; count < 10000; count++)
		{
			int	value = rand();
			Data.addNumber(value);
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return (EXIT_FAILURE);
	}

	std::cout << "\n----- ----- ShorSpan ----- -----\n" << std::endl;

	std::cout << Data.shortestSpan() << std::endl;

	std::cout << "\n----- ----- 2nd Vector ----- -----\n" << std::endl;

	Span	newData(10000);

	try
	{
		for (int check = 0; check < 10000; check++)
		{
			int	newValue = rand() % 10000;
			newData.addNumber(newValue);
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return (EXIT_FAILURE);
	}

	std::cout << "\n----- ----- LongestSpan ----- -----\n" << std::endl;

	std::cout << "min: " << newData.getMin() << std::endl;
	std::cout << "max: " << newData.getMax() << std::endl;

	std::cout << newData.longestSpan() << std::endl;

	std::cout << "\n----- ----- Bad Alloc ----- -----\n" << std::endl;

	try
	{
		newData.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "\n----- ----- FillVector ----- -----\n" << std::endl;

	Span	cVector(100);
	Span	dVector(100);

	try
	{
		cVector.fillVector(80);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		dVector.fillVector(120);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (0);
}
