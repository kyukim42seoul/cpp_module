#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class Weapon;

class HumanA
{
private:
	Weapon&		_my_weapon;
	std::string	_name;
public:
	void	attack(void);
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA(void);
};

#endif
