#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>

class Conversion
{
private:
	std::string	_input;
	Conversion(void);
public:
	Conversion(const std::string& input);
	~Conversion(void);
};

#endif
