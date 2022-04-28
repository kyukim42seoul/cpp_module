#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _my_weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : _my_weapon(weapon), _name(name)
{
}

HumanA::~HumanA(void)
{
}
