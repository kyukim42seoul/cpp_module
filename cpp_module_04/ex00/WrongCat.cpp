#include "WrongCat.hpp"

void	WrongCat::makeSound(void)
{
	std::cout << "..." << std::endl;
}

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat : Default Constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& origin)
{
	std::cout << "WrongCat : Copy Constructor" << std::endl;
	*this = origin;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat : Destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat : Operator=" << std::endl;
	WrongAnimal::operator=(other);
	return (*this);
}
