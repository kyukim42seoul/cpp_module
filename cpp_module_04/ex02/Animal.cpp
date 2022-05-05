#include "Animal.hpp"

const std::string& Animal::getType(void)
{
	return (type);
}

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal : Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& origin)
{
	std::cout << "Animal : Copy Constructor called" << std::endl;
	*this = origin;
}

Animal::~Animal(void)
{
	std::cout << "Animal : Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal : Operator= called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}
