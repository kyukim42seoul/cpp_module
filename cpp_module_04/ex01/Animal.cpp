#include "Animal.hpp"

void	Animal::makeSound(void)
{
	std::cout << "I don't know my sound..." << std::endl;
}

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
	this->type = other.type;
	return (*this);
}
