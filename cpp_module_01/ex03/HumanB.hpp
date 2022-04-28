#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class Weapon;

class HumanB
{
private:
	Weapon		*_my_weapon;
	std::string	_name;
public:
	void	attack(void);
	void	setWeapon(Weapon &weapon);
	HumanB(void);
	HumanB(const std::string &name);
	~HumanB(void);
};

#endif
