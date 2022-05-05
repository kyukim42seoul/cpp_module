#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound(void)
{
	std::cout << "I don't know my sound..." << std::endl;
}

const std::string& WrongAnimal::getType(void)
{
	return (type);
}

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal : Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin)
{
	std::cout << "WrongAnimal : Copy Constructor called" << std::endl;
	*this = origin;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal : Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal : Operator= called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}
