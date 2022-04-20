#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(void);
	Weapon(const std::string &type_input);
	~Weapon();
	const std::string&	getType(void) const;
	void				setType(const std::string &new_type);
};

#endif
