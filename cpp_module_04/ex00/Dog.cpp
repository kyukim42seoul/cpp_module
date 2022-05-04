#include "Dog.hpp"

void	Dog::makeSound(void)
{
	std::cout << "WangWang!!" << std::endl;
}

Dog::Dog(void) : Animal()
{
	std::cout << "Dog : Default Constructor" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& origin)
{
	std::cout << "Dog : Copy Constructor" << std::endl;
	*this = origin;
}

Dog::~Dog(void)
{
	std::cout << "Dog : Destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog : Operator=" << std::endl;
	Animal::operator=(other);
	return (*this);
}
