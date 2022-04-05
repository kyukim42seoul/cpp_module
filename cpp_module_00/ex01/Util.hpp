#ifndef __UTIL_HPP__
#define __UTIL_HPP__

#include "main.hpp"

class Util
{
	public:
		bool	isPrintable(std::string str);
		bool	isNumber(std::string str);
		Util(void);
		~Util(void);
};

#endif