#include "ClapTrap.hpp"

void	ClapTrap::set_default(int hit, int energy, int attack)
{
	hit_points = hit;
	energy_points = energy;
	attack_damage = attack;
}

void	ClapTrap::attack(const std::string& target)
{
	switch (energy_points)
	{
	case 0:
		std::cout << name << " is tired" << std::endl;
		break ;
	default:
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
		break ;
	}
/*	if (energy_points == 0)
	{
		std::cout << name << " is tired" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}*/
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount > hit_points)
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
		hit_points = 0;
	}
	else
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
		hit_points -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points == 0)
	{
		std::cout << name << " is tired" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is repaired " << amount << " of damage!" << std::endl;
		hit_points += amount;
		energy_points--;
	}
}

void	ClapTrap::showStatus(void)
{
	std::cout << "Name : " << name << std::endl;
	std::cout << "HitPoints : " << hit_points << std::endl;
	std::cout << "EnergyPoints : " << energy_points << std::endl;
	std::cout << "AttackDamage : " << attack_damage << std::endl;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
: name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Overload Constructor called" << std::endl;
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

ClapTrap& ClapTrap::operator=(ClapTrap& origin)
{
	this->name = origin.name;
	this->hit_points = origin.hit_points;
	this->energy_points = origin.energy_points;
	this->attack_damage = origin.attack_damage;

	return (*this);
}
