#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << my_weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name_input, Weapon &weapon) : my_weapon(weapon), name(name_input)
{
}

HumanA::~HumanA(void)
{
}
