#include "ScavTrap.hpp"

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is Gate keeper mode now" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (isBroken)
	{
		std::cout << "ScavTrap " << name << " is broken..." << std::endl;
		return ;
	}
	switch (energy_points)
	{
	case 0:
		std::cout << name << " is tired" << std::endl;
		break ;
	default:
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
		break ;
	}
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
