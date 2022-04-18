#include "ClapTrap.hpp"

void	attack(const std::string& target)
{

}

void	takeDamage(unsigned int amount)
{
	
}

void	beRepaired(unsigned int amount)
{

}

ClapTrap::ClapTrap(const std::string name)
{
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& origin)
{
	this->name = origin.name;
	this->hit_points = origin.hit_points;
	this->energy_points = origin.energy_points;
	this->attack_damage = origin.attack_damage;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap& ClapTrap::operator = (ClapTrap& origin)
{
	ClapTrap&	ref_this(*this);

	this->name = origin.name;
	this->hit_points = origin.hit_points;
	this->energy_points = origin.energy_points;
	this->attack_damage = origin.attack_damage;

	return (ref_this);
}