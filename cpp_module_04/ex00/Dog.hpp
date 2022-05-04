#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal
{
public:
	void	makeSound(void);
	Dog(void);
	Dog(const Dog& origin);
	~Dog(void);
	Dog& operator=(const Dog& other);
};

#endif
