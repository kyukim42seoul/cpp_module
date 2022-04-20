#include "Weapon.hpp"

const std::string&	Weapon::getType(void) const
{
	const std::string	&ref_type(type);

	return (ref_type);
}

void	Weapon::setType(const std::string &new_type)
{
	type = new_type;
}

Weapon::Weapon(void)
{
}

Weapon::Weapon(const std::string &type_input)
{
	setType(type_input);
}

Weapon::~Weapon()
{
}
