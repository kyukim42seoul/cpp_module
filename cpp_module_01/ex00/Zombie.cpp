#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << my_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	;
}

Zombie::Zombie(std::string name) : my_name(name)
{
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << my_name << " is gone..." << std::endl;
}
