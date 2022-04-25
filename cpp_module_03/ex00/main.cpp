#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Clap("Helena");

	Clap.showStatus();
	Clap.attack("Serena");
	Clap.takeDamage(20);
	Clap.beRepaired(40);
	Clap.showStatus();
	return (EXIT_SUCCESS);
}
