#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " take damage " << amount << ", causing " << hit_points << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " is repaired " << amount << " of damage!" << std::endl;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "Overload Constructor called" << std::endl;
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& origin)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->name = origin.name;
	this->hit_points = origin.hit_points;
	this->energy_points = origin.energy_points;
	this->attack_damage = origin.attack_damage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default Destructor called" << std::endl;
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
