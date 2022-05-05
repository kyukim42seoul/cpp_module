#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	const std::string&	getType(void);
	void				makeSound(void);
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& origin);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal &other);
};

#endif
