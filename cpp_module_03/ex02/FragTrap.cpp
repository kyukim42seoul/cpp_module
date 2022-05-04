#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Frag " << name << " Yeeeeeah highFives!" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Frag Defualt Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& origin)
{
	std::cout << "Frag Copy Constructor" << std::endl;
	*this = origin;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Frag Overload Constructor" << std::endl;
	set_default(100u, 100u, 30u);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Frag " << name << " Default Destructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}
