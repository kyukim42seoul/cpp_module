#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;
class Dog : public Animal
{
private:
	Brain* brain;
public:
	void	makeSound(void);
	void	thinkMaster(const std::string& name);
	void	isThinking(void);
	Dog(void);
	Dog(const Dog& origin);
	Dog(const std::string& idea);
	~Dog(void);
	Dog& operator=(const Dog& other);
};

#endif
