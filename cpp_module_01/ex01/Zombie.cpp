#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setNumber(int number)
{
	this->number = number;
}

int		Zombie::getNumber(void)
{
	return (number);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : name(name)
{
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << name << " is gone..." << std::endl;
}
