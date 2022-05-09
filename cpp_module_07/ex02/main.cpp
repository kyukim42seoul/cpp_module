#include "Array.hpp"
#include <string>

int	main()
{
	Array<int>	iArray(10);
	Array<std::string>	strArray(10);
	int	iCase[100] = {1, 2, 3,4, 5, 6, 7};
	std::string	strCase[100] = {"hello", "fish", "meat", "hi"};

	iArray.fillArray(iCase, 10);
	const int* iBuf = iArray.getArray();

	strArray.fillArray(strCase, 10);
	const std::string* strBuf = strArray.getArray();

	for (int count = 0; count < 10; count++)
	{
		std::cout << iBuf[count] << std::endl;
		std::cout << strBuf[count] << std::endl;
	}

	std::cout << iArray.size() << " " << strArray.size() << std::endl;

	Array<char>	cArray;

	std::cout << cArray.size() << std::endl;

	try
	{
		std::cout << iArray[12] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << strArray[3] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}
