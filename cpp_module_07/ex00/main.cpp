#include "whatever.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Basic Test ----- -----\n" << std::endl;

	int a = 2;
	int b = 3;

	std::cout << "\n----- ----- Swap/Min/Max Int ----- -----\n" << std::endl;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "\n----- ----- Swap/Min/Max String ----- -----\n" << std::endl;

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\n----- ----- Additional Test ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Same Value Return Second Argument ----- -----\n" << std::endl;

	int		intA(42);
	int		intB(42);
	int*	ptrA = &intA;
	int*	ptrB = &intB;

	std::cout << "intA: " << &intA << std::endl;
	std::cout << "intB: " << &intB << std::endl;
	std::cout << "min: " << &::min(*ptrA, *ptrB) << std::endl;
	std::cout << "max: " << &::max(*ptrB, *ptrA) << std::endl;

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return 0;
}
