#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << my_weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name_input, Weapon &weapon) : my_weapon(&weapon), name(name_input)
{
}

HumanA::~HumanA(void)
{
}