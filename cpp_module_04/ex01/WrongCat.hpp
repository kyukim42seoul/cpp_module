#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	void	makeSound(void);
	WrongCat(void);
	WrongCat(const WrongCat& origin);
	~WrongCat(void);
	WrongCat& operator=(const WrongCat& other);
};

#endif
