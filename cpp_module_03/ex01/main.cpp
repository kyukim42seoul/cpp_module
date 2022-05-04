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
	ScavTrap	tom("tom");
	ClapTrap	joy("joy");

	rohan.showStatus();
	tom.showStatus();
	rohan.setAttackDamage(3);
	joy.attack("Test");
	for (int count = 1; count < 5; count++)
	{
		std::cout << count << " : ";
		rohan.attack("Tom");
		tom.takeDamage(rohan.getAttackDamage());
		tom.showStatus();
	}
	rohan.showStatus();

	std::cout << "\n----- ----- Repair ----- -----\n" << std::endl;

	ScavTrap	mahan("mahan");
	mahan.takeDamage(5);
	for (int heal = 1; heal < 12; heal++)
	{
		std::cout << heal << " : ";
		mahan.beRepaired(3);
		mahan.showStatus();
	}

	std::cout << "\n----- ----- Additional Function ----- -----\n" << std::endl;

	mahan.guardGate();

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (EXIT_SUCCESS);
}
