#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	helena("Helena");

	helena.showStatus();
	helena.attack("Serena");
	helena.takeDamage(20);
	helena.beRepaired(40);
	helena.showStatus();
	for (int count = 0; count < 10; count++)
		helena.attack("Tom");
	ClapTrap	Joe("Joe");
	for (int heal = 0; heal < 12; heal++)
		Joe.beRepaired(30);
	return (EXIT_SUCCESS);
}
