#ifndef	__CLAPTRAP_HPP__
#define	__CLAPTRAP_HPP__

#include <iostream>
#include <string>

/*
	ClapTrap <name> attacks <target>, causing <damage> points of damage!
	테스트도 구현해서 첨부할 것
*/

class ClapTrap
{
private:
	std::string	name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;
protected:
	void		set_default(int hit, int energy, int attack);
public:
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		showStatus(void);
	ClapTrap(void);
	ClapTrap(const ClapTrap& origin);
	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap& operator = (ClapTrap& origin);
};

#endif
