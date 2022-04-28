#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(void);
	Weapon(const std::string &type);
	~Weapon();
	const std::string&	getType(void) const;
	void				setType(const std::string &type);
};

#endif
