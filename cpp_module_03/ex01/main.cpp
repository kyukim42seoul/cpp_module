#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap helena("helena");
	ScavTrap serena("serena");

	helena.showStatus();
	serena.showStatus();
	serena.guardGate();

	std::cout << "-----OCCF test-----" << std::endl;
	std::cout << "[Copy Constructor]" << std::endl;
	ScavTrap europe(serena);
	europe.showStatus();
	std::cout << "[= Operator]" << std::endl;
	ScavTrap kenya("kenya");
	kenya = serena;
	kenya.showStatus();
	return (EXIT_SUCCESS);
}
