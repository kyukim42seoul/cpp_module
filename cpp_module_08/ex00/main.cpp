#include "easyfind.hpp"

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Instantiation ----- -----\n" << std::endl;

	std::vector<int>	iVector;
	std::list<char>		cList;
	std::deque<int>		iDeque;

	std::cout << "\n----- ----- Set Container ----- -----\n" << std::endl;

	iVector.push_back(1);
	iVector.push_back(2);
	iVector.push_back(3);
	iVector.push_back(4);

	cList.push_back('a');
	cList.push_back('b');
	cList.push_back('c');
	cList.push_back('d');

	iDeque.push_back(4);
	iDeque.push_back(25);
	iDeque.push_back(323);
	iDeque.push_back(4022);

	std::cout << "\n----- ----- easyfind() SUCCESS Case ----- -----\n" << std::endl;

	try
	{
		std::cout << *easyfind(iVector, 1) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(cList, 'c') << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(iDeque, 25) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- ----- easyfind() FAILURE Case ----- -----\n" << std::endl;

	try
	{
		std::cout << *easyfind(iVector, 26) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(cList, 'z') << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(iDeque, 1245) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (0);
}
