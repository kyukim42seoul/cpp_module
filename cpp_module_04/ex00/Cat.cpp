#include "Cat.hpp"

void	Cat::makeSound(void)
{
	std::cout << "..." << std::endl;
}

Cat::Cat(void) : Animal()
{
	std::cout << "Cat : Default Constructor is called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& origin)
{
	std::cout << "Cat : Copy Constructor called" << std::endl;
	*this = origin;
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructore is called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat : Operator= called" << std::endl;
	Animal::operator=(other);
	return (*this);
}
