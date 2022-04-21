#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "It's debug function" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "It's info function" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "It's warning function" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "It's error function" << std::endl;
}

void	Harl::complain(const std::string &level)
{
	std::string	level_preset[4];
	void 		(Harl::*funcPtr[4])(void);

	funcPtr[0] = &Harl::debug;
	funcPtr[1] = &Harl::info;
	funcPtr[2] = &Harl::warning;
	funcPtr[3] = &Harl::error;
	level_preset[0] = "DEBUG";
	level_preset[1] = "INFO";
	level_preset[2] = "WARNING";
	level_preset[3] = "ERROR";
	for (int index = 0; index < 4; index++)
	{
		if (level_preset[index] == level)
		{
			(this->*funcPtr[index])();
		}
	}
}

Harl::Harl(void)
{
}

Harl::~Harl()
{
}
