#include <iostream>
#include <cstdlib>
#include <exception>

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Pesudo Literal Test(+/-inf, nan) ----- -----\n" << std::endl;

	char *	temp;
	float	a(5 / 3);

	try
	{
		double	Ainf = std::strtod("inf",&temp);
		double	Binf = std::strtod("-inf",&temp);
		float	Ainff = std::strtod("inf",&temp);
		float	Binff = std::strtod("-inf",&temp);
		std::cout << Ainf << "\n" << Binf << "\n" << Ainff << "\n" << Binff << std::endl;
	}
	catch (std::exception* e)
	{
		std::cout << e->what() << std::endl;
	}

	std::cout << "\n----- ----- Empty String Printable Check ----- -----\n" << std::endl;

	std::string	empty("");

	if (isprint(empty.c_str()[0]))
		std::cout << "empty is printable" << std::endl;
	else
		std::cout << "empty is not printable" << std::endl;

	std::cout << "\n----- ----- Strtod() Limit Check ----- -----\n" << std::endl;

	std::string	TT("-0");
	char*		endPoint;
	double		doubleValue;

	doubleValue = std::strtod(TT.c_str(), &endPoint);
	std::cout << doubleValue << "\n" << endPoint << std::endl;
	if (endPoint[0] == '\0')
		std::cout << "Is empty!" << std::endl;
	if (errno == ERANGE)
		std::cout << "It's huge value" << std::endl;

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	char	*end;
	char	aBuf = 'a';
	double	aa = static_cast<double>(aBuf);
	char	after = static_cast<char>(aa);

	aa = std::strtod(&aBuf, &end);
	char	afterB = static_cast<char>(aa);

	std::cout << "a: " << aa << "\nafter: " << after << std::endl;
	std::cout << "a: " << aa << "\nafterB: " << afterB << std::endl;

	return 0;
}
