#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;


	std::cout << "\n----- ----- OCCF ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Default Constructor ----- -----\n" << std::endl;

	ScavTrap	A;
	A.showStatus();

	std::cout << "\n----- ----- Overload Constructor ----- -----\n" << std::endl;

	ScavTrap	B("B");
	B.showStatus();

	std::cout << "\n----- ----- Copy Constructor ----- -----\n" << std::endl;

	ScavTrap	C(B);
	C.showStatus();

	std::cout << "\n----- ----- = Operator ----- -----\n" << std::endl;

	A = C;
	A.showStatus();

	std::cout << "\n----- ----- Basic Function ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Attack ----- -----\n" << std::endl;

	ScavTrap	rohan("rohan");
	for (int count = 1; count < 12; count++)
	{
		std::cout << count << " : ";
		rohan.attack("Tom");
	}

	std::cout << "\n----- ----- Repair ----- -----\n" << std::endl;

	ScavTrap	mahan("mahan");
	for (int heal = 1; heal < 12; heal++)
	{
		std::cout << heal << " : ";
		mahan.beRepaired(30);
	}

	std::cout << "\n----- ----- Tank ----- -----\n" << std::endl;

	ScavTrap	punchingBag("punchingBag");
	for (int tank = 1; tank < 12; tank++)
	{
		std::cout << tank << " : ";
		punchingBag.takeDamage(30);
	}

	std::cout << "\n----- ----- Additional Function ----- -----\n" << std::endl;

	rohan.guardGate();

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (EXIT_SUCCESS);
}
