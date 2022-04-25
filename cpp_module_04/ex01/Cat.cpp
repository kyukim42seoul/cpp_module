#include "Cat.hpp"

void	Cat::makeSound(void)
{
	std::cout << "..." << std::endl;
}

Cat::Cat(void) : Animal()
{
	std::cout << "Cat : Default Constructor is called" << std::endl;
	type = "Cat";
	brain = new Brain();
	brain->thinking(type);
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructore is called" << std::endl;
	delete(brain);
}
