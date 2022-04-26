#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
	std::cout << "Scav : I'm in Gate keeper mode now" << std::endl;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "Scav : Defualt Constructor Called" << std::endl;
	set_default(100, 50, 20);
}

ScavTrap::ScavTrap(const ScavTrap& origin)
{
	*this = origin;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Scav : Overloaded Constructor Called" << std::endl;
	set_default(100, 50, 20);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin)
{
	ClapTrap::operator=(origin);
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
}
