#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap helena("helena");
	ScavTrap serena("serena");

	helena.showStatus();
	serena.showStatus();
	serena.guardGate();

	ScavTrap kenya("kenya");
	kenya = serena;
	kenya.showStatus();

	return (EXIT_SUCCESS);
}
