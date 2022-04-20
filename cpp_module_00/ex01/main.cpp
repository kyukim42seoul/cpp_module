#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	book;

	while (true)
	{
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
		book.get_cmd();
		book.set_flag();
		if (book.get_flag() == 1)
		{
			book.add();
			book.clear_flag();
		}
		else if (book.get_flag() == 2)
		{
			book.search();
			book.clear_flag();
		}
		else if (book.get_flag() == 3)
			exit(EXIT_SUCCESS);
	}
	return (EXIT_SUCCESS);
}
