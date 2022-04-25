#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>

class Animal
{
private:

protected:
	std::string	type;
public:
	const std::string&	getType(void);
	virtual void		makeSound(void);
	Animal(void);
	~Animal(void);
};

#endif
