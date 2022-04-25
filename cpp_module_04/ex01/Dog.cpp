#include "Dog.hpp"

void	Dog::makeSound(void)
{
	std::cout << "WangWang!!" << std::endl;
}

Dog::Dog(void) : Animal()
{
	std::cout << "Dog : Default Constructor is called" << std::endl;
	type = "Dog";
	brain = new Brain();
	brain->thinking(type);
}

Dog::~Dog(void)
{
	std::cout << "Dog : Destructore is called" << std::endl;
	delete(brain);
}
