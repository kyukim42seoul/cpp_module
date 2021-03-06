#include "Cat.hpp"

void	Cat::makeSound(void)
{
	std::cout << "..." << std::endl;
}

Cat::Cat(void) : Animal()
{
	std::cout << "Cat : Default Constructor" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& origin)
{
	std::cout << "Cat : Copy Constructor" << std::endl;
	*this = origin;
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat : Operator=" << std::endl;
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
}
