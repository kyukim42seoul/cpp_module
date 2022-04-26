#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>
#include <string>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void	complain(const std::string &level);
	Harl(void);
	~Harl(void);
};

#endif
