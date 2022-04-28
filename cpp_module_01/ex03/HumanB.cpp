#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _my_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_my_weapon = &weapon;
}

HumanB::HumanB(const std::string &name) : _my_weapon(NULL), _name(name)
{
}

HumanB::HumanB(void)
{
}

HumanB::~HumanB(void)
{
}
