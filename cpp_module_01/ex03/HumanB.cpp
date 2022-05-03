#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _my_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_my_weapon = &weapon;
}

Weapon&	HumanB::getWeapon(void)
{
	Weapon&	ref_weapon(*_my_weapon);

	if (_my_weapon == 0)
		std::cout << "I have no weapon" << std::endl;
	else
		std::cout << "I got weapon : " << _my_weapon->getType() << std::endl;
	return (ref_weapon);
}

HumanB::HumanB(const std::string &name) : _my_weapon(0), _name(name)
{
}

HumanB::HumanB(void)
{
}

HumanB::~HumanB(void)
{
}
