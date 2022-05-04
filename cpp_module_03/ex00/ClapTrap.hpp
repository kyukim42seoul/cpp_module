#ifndef	__CLAPTRAP_HPP__
#define	__CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string		name;
	unsigned int	max_hit_points;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
	bool			isBroken;
protected:
	void		set_default(unsigned int hit, unsigned int energy, unsigned int attack);
public:
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		showStatus(void);
	ClapTrap(void);
	ClapTrap(const ClapTrap& origin);
	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& other);
};

#endif
