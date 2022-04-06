#include <iostream>
#include <string>

int	main()
{
	std::string 	defualt_str("HI THIS IS BRAIN");
	std::string		*ptr_str;
	std::string		&ref_str(defualt_str);

	ptr_str = &defualt_str;
	std::cout << &defualt_str << std::endl;
	std::cout << &ptr_str << std::endl;
	std::cout << &ref_str << std::endl;

	std::cout << "--------------------" << std::endl;

	std::cout << defualt_str << std::endl;
	std::cout << *ptr_str << std::endl;
	std::cout << ref_str << std::endl;

	return (EXIT_SUCCESS);
}
