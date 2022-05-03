#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("curde spiked club");

		HumanB	jim("Jim");
		std::cout << "-----before Set-----" << std::endl;
		jim.getWeapon();
		jim.setWeapon(club);
		std::cout << "-----after Set-----" << std::endl;
		jim.getWeapon();
		std::cout << "-----Check Done-----" << std::endl;
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return 0;
}
