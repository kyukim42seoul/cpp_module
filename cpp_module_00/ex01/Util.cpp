#include "Util.hpp"

Util::Util()
{
}

Util::~Util()
{
}

bool	Util::isPrintable(std::string str)
{
	for (unsigned int index = 0; index < str.length(); index++)
	{
		if (str[index] >= 32 && str[index] <= 127)
			;
		else
			return (false);
	}
	return (true);
}

bool	Util::isNumber(std::string str)
{
	for (unsigned int index = 0; index < str.length(); index++)
	{
		if (str[index] >= 48 && str[index] <= 57)
			;
		else
			return (false);
	}
	return (true);
}