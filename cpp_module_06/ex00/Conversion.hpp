#ifndef __CONVERSION_HPP__
#define __CONVERSION_HPP__

#include <iostream>
#include <iomanip>	//setprecision()
#include <string>
#include <cstdlib>	//strtod()
#include <cstring>	//strcmp()
#include <cctype>	//isprint()
#include <limits>	//numeric_limits:;infinity/quite_nan
#include <exception>	//예외클래스

class Conversion
{
private:
	std::string		_input;
	int				_intValue;
	float			_floatValue;
	double			_doubleValue;
	char			_charValue;
	// bool			_negative;
	// unsigned int	_floatPrecision;
	// unsigned int	_doublePrecision;
	// bool			_isNan;
	bool			_isPrintable;
	bool			_isFloat;
	Conversion(void);
	Conversion(Conversion& origin);
	Conversion& operator=(const Conversion& other);
public:
	// class NonDisplayable : public std::exception
	// {
	// 	virtual const char* what(void) const throw();
	// };
	class IsEmpty : public std::exception
	{
		virtual const char* what(void) const throw();
	};
	const int&		getInt(void) const;
	const float&	getFloat(void) const;
	const double&	getDouble(void) const;
	const char&		getChar(void) const;
	void			printChar(std::ostream&) const;
	void			printInt(std::ostream&) const;
	void			printFloat(std::ostream&) const;
	void			printDouble(std::ostream&) const;
	Conversion(const std::string& input);
	~Conversion(void);
};

std::ostream&	operator<<(std::ostream& os, const Conversion& refConversion);

#endif
