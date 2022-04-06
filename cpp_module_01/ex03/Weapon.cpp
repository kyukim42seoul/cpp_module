#include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	const std::string	&ref_type(type);

	return (ref_type);
}

void				Weapon::setType(std::string new_type)
{
	type = new_type;
}

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type_input)
{
	setType(type_input);
}

Weapon::~Weapon()
{
}
