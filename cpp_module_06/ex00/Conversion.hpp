#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <iomanip>	//setprecision()
#include <string>
#include <cstdlib>	//strtod()
#include <cstring>	//strcmp()
#include <cctype>	//isprint()
#include <limits>	//numeric_limits:;infinity/quite_nan

class Conversion
{
private:
	std::string	_input;
	int			_intValue;
	float		_floatValue;
	double		_doubleValue;
	char		_charValue;
	bool		_negative;
	Conversion(void);
//	Coversion(Coversion& origin);
public:
	const int&		getInt(void) const;
	const float&	getFloat(void) const;
	const double&	getDouble(void) const;
	const char&		getChar(void) const;
	Conversion(const std::string& input);
	~Conversion(void);
};

std::ostream&	operator<<(std::ostream& os, const Conversion& refConversion);

#endif
