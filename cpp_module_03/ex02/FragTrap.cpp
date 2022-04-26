#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Frag : Yeeeeeah highFives!" << std::endl;
}

FragTrap::FragTrap(void)
{
	std::cout << "Frag : Defualt Constructor Called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Frag : Overloaded Constructor Called" << std::endl;
	set_default(100, 100, 30);
}

FragTrap::FragTrap(const FragTrap& origin)
{
	*this = origin;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Frag : Destructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& origin)
{
	ClapTrap::operator=(origin);
	return (*this);
}
