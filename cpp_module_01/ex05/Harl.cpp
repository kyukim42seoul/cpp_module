#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	level_preset[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void 		(Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int	index(0);
	while (index < 4 && level_preset[index] != level)
		index++;
	switch (index)
	{
	case 4:
		std::cout << "[ NO MATCH ]" << std::endl;
		std::cout << "There is no match level" << std::endl;
		break;
	default:
		(this->*funcPtr[index])();
		break;
	}
}

Harl::Harl(void)
{
}

Harl::~Harl()
{
}
