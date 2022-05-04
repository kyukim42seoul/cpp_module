#include "ClapTrap.hpp"

void	ClapTrap::set_default(unsigned int hit, unsigned int energy, unsigned int attack)
{
	max_hit_points = hit;
	hit_points = hit;
	energy_points = energy;
	attack_damage = attack;
}

void	ClapTrap::attack(const std::string& target)
{
	if (isBroken)
	{
		std::cout << "ClapTrap " << name << " is broken..." << std::endl;
		return ;
	}
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
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (isBroken)
	{
		std::cout << "ClapTrap " << name << " takes 0 damage!" << std::endl;
		std::cout << "ClapTrap " << name << " is broken..." << std::endl;
		return ;
	}
	if (amount > hit_points)
	{
		std::cout << "ClapTrap " << name << " takes " << hit_points << " damage!" << std::endl;
		hit_points = 0;
		isBroken = true;
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
		if (hit_points + amount > max_hit_points)
		{
			std::cout << "ClapTrap " << name << " is repaired " << max_hit_points - hit_points << " of damage!" << std::endl;
			hit_points = max_hit_points;
		}
		else
		{
			std::cout << "ClapTrap " << name << " is repaired " << amount << " of damage!" << std::endl;
			hit_points += amount;
		}
		energy_points--;
		isBroken = false;
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
: max_hit_points(0), hit_points(0), energy_points(0), attack_damage(0), isBroken(true)
{
	std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
: name(name), max_hit_points(10), hit_points(10), energy_points(10), attack_damage(0), isBroken(false)
{
	std::cout << "ClapTrap Overload Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& origin)
{
	std::cout << "ClapTrap Copy Constructor" << std::endl;
	*this = origin;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Default Destructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->max_hit_points = other.max_hit_points;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	this->isBroken = other.isBroken;
	return (*this);
}
