#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class Weapon;

class HumanA
{
private:
	Weapon		*my_weapon;
	std::string	name;
public:
	void	attack(void);
	HumanA(std::string name_input, Weapon &weapon);
	~HumanA(void);
};

#endif
