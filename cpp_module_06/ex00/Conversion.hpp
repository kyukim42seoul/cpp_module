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
	int				_intValue;
	float			_floatValue;
	double			_doubleValue;
	char			_charValue;
	bool			_isNan;
	bool			_isPrintable;
	bool			_isInteger;
	bool			_isImpossible;
	bool			_positiveInfinity;
	bool			_negativeInfinity;
	Conversion(void);
	Conversion(Conversion& origin);
	Conversion& operator=(const Conversion& other);
	void			checkPesudo(const std::string& input);
public:
	void			printChar(std::ostream&) const;
	void			printInt(std::ostream&) const;
	void			printFloat(std::ostream&) const;
	void			printDouble(std::ostream&) const;
	Conversion(const std::string& input);
	~Conversion(void);
};

std::ostream&	operator<<(std::ostream& os, const Conversion& refConversion);

#endif
