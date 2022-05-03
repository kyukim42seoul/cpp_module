#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
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
