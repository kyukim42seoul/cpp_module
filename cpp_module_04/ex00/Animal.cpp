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

Animal::~Animal(void)
{
	std::cout << "Animal : Destructor called" << std::endl;
}
