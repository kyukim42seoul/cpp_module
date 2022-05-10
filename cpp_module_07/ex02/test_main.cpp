#include "Array.hpp"
#include <string>

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Instantiation ----- -----\n" << std::endl;

	Array<int>	iArray(10);
	Array<std::string>	strArray(10);
	int	iCase[5] = {1, 2, 3,4, 5};
	std::string	strCase[5] = {"hello", "fish", "meat", "hi", "hey"};

	std::cout << "\n----- ----- Get/Set Int Array ----- -----\n" << std::endl;

	iArray.fillArray(iCase, 5);
	const int* iBuf = iArray.getArray();

	std::cout << "\n----- ----- Get/Set Str Array ----- -----\n" << std::endl;

	strArray.fillArray(strCase, 5);
	const std::string* strBuf = strArray.getArray();

	std::cout << "\n----- ----- Print Int/Str Array ----- -----\n" << std::endl;

	try
	{
		for (int count = 0; count < 12; count++)
		{
			std::cout << strArray[count] << std::endl;
			std::cout << strBuf[count] << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		for (int IntCount = 0; IntCount < 12; IntCount++)
		{
			std::cout << iArray[IntCount] << std::endl;
			std::cout << iBuf[IntCount] << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----- ----- Check Size ----- -----\n" << std::endl;

	std::cout << iArray.size() << " " << strArray.size() << std::endl;

	std::cout << "\n----- ----- Default Construct Size ----- -----\n" << std::endl;

	Array<char>	cArray;

	std::cout << cArray.size() << std::endl;

	std::cout << "\n----- ----- Try/Catch ----- -----\n" << std::endl;

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

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (EXIT_SUCCESS);
}
