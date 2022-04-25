#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
	std::cout << "Scav : I'm in Gate keeper mode now" << std::endl;
}

ScavTrap::ScavTrap(void)
{
	set_default(100, 50, 20);
	std::cout << "Scav : Defualt Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	set_default(100, 50, 20);
	std::cout << "Scav : Overloaded Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scav : Destructor Called" << std::endl;
}
