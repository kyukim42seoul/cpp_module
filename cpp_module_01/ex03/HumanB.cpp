#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << my_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	my_weapon = &weapon;
}

HumanB::HumanB(const std::string &name_input) : my_weapon(NULL), name(name_input)
{
}

HumanB::HumanB(void)
{
}

HumanB::~HumanB(void)
{
}
