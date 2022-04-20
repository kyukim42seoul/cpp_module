#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << my_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string &name)
{
	my_name = name;
}

void	Zombie::set_number(int number)
{
	my_number = number;
}

int		Zombie::get_number(void)
{
	return (my_number);
}

Zombie::Zombie(void)
{
}

Zombie::Zombie(const std::string &name) : my_name(name)
{
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << my_name << " is gone..." << std::endl;
}
