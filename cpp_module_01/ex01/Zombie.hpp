#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
private:
	int			my_number;
	std::string	my_name;
public:
	void		announce(void);
	void		set_name(std::string name);
	void		set_number(int number);
	int			get_number(void);
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
};

Zombie*	zombieHorde(int N, std::string name);
void	test_zombieHorde(int zombie_count, Zombie *horde);
#endif