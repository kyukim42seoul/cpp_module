#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is Gate keeper mode now" << std::endl;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Defualt Constructor" << std::endl;
	set_default(100u, 50u, 20u);
}

ScavTrap::ScavTrap(const ScavTrap& origin)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	*this = origin;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap Overload Constructor" << std::endl;
	set_default(100u, 50u, 20u);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << name << " Default Destructor" << std::endl;
}
