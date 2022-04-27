#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	type;
public:
	const std::string&	getType(void);
	virtual void		makeSound(void) = 0;
	Animal(void);
	Animal(const Animal& origin);
	virtual ~Animal(void);
	Animal& operator=(const Animal &other);
};

#endif
