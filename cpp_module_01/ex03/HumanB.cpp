#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << my_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	my_weapon = &weapon;
}

HumanB::HumanB(std::string name_input) : name(name_input)
{
}

HumanB::HumanB(void)
{
}

HumanB::~HumanB(void)
{
}
