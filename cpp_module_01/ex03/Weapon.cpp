#include "Weapon.hpp"

const std::string&	Weapon::getType(void) const
{
	const std::string	&typeREF(_type);

	return (typeREF);
}

void	Weapon::setType(const std::string &type)
{
	_type = type;
}

Weapon::Weapon(void)
{
}

Weapon::Weapon(const std::string &type)
{
	setType(type);
}

Weapon::~Weapon()
{
}
