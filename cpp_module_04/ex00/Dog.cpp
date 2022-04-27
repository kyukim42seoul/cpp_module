#include "Dog.hpp"

void	Dog::makeSound(void)
{
	std::cout << "WangWang!!" << std::endl;
}

Dog::Dog(void) : Animal()
{
	std::cout << "Dog : Default Constructor is called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& origin)
{
	std::cout << "Dog : Copy Constructor called" << std::endl;
	*this = origin;
}

Dog::~Dog(void)
{
	std::cout << "Dog : Destructore is called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog : Operator= called" << std::endl;
	Animal::operator=(other);
	return (*this);
}
