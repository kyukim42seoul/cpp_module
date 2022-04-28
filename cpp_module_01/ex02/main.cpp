#include <iostream>
#include <string>

int	main()
{
	std::string 	stringVAL("HI THIS IS BRAIN");
	std::string		*stringPTR;
	std::string		&stringREF(stringVAL);

	stringPTR = &stringVAL;
	std::cout << &stringVAL << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "--------------------" << std::endl;

	std::cout << stringVAL << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (EXIT_SUCCESS);
}
