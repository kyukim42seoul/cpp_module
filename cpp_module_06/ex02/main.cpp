#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Instantiation ----- -----\n" << std::endl;

	Base	test;
	Base*	arrayBase[20];

	srand(time(NULL));

	std::cout << "\n----- ----- Set Array ----- -----\n" << std::endl;

	for (unsigned int count = 0; count < 20; count++)
		arrayBase[count] = test.generate();

	std::cout << "\n----- ----- Identify by Pointer ----- -----\n" << std::endl;

	for (unsigned int ptrCount = 0; ptrCount < 20; ptrCount++)
		test.identify(arrayBase[ptrCount]);

	std::cout << "\n----- ----- Identify by Reference ----- -----\n" << std::endl;

	for (unsigned int refCount = 0; refCount < 20; refCount++)
		test.identify(*arrayBase[refCount]);

	std::cout << "\n----- ----- Free Array ----- -----\n" << std::endl;

	for (unsigned int delCount = 0; delCount < 20; delCount++)
		delete arrayBase[delCount];

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (EXIT_SUCCESS);
}
