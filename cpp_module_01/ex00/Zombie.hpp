#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
private:
	const std::string	my_name;
	void				announce(void);
public:
	Zombie(void);
	Zombie(const std::string &name);
	~Zombie(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
