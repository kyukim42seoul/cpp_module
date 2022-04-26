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
	void 		(Harl::*funcPtr[5])(void);

	funcPtr[0] = &Harl::debug;
	funcPtr[1] = &Harl::info;
	funcPtr[2] = &Harl::warning;
	funcPtr[3] = &Harl::error;
	level_preset[0] = "DEBUG";
	level_preset[1] = "INFO";
	level_preset[2] = "WARNING";
	level_preset[3] = "ERROR";
	int	index(0);
	while (level_preset[index] != level && index < 5)
		index++;
	switch (index)
	{
	case 5:
		std::cout << "[ERR]There is no match level" << std::endl;
		break;
	default:
		int	match_level(index);
		while (match_level < 4)
		{
			(this->*funcPtr[match_level])();
			match_level++;
		}
		break;
	}
}

Harl::Harl(void)
{
}

Harl::~Harl()
{
}
