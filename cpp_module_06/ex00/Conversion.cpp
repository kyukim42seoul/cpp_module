#include "Conversion.hpp"

const char* Conversion::IsEmpty::what(void) const throw()
{
	return ("Non displayable");
}

const int&	Conversion::getInt(void) const
{
	return (_intValue);
}

const float&	Conversion::getFloat(void) const
{
	return (_floatValue);
}

const double&	Conversion::getDouble(void) const
{
	return (_doubleValue);
}

const char&	Conversion::getChar(void) const
{
	return (_charValue);
}

void	Conversion::printChar(std::ostream& os) const
{

}

void	Conversion::printInt(std::ostream& os) const
{
	// if (_isNan)
		// os << "impossible" << std::endl;
//	int max/min 조건문 추가
	os << _intValue << std::endl;
}

void	Conversion::printFloat(std::ostream& os) const
{
	os << std::setprecision(7) << "float: " << this->_floatValue << "f" << std::endl;
}

void	Conversion::printDouble(std::ostream& os) const
{
	os << std::setprecision(15) << "double: " << this->_doubleValue << std::endl;
}

Conversion::Conversion(void)
{
}

Conversion::Conversion(Conversion& origin)
{
	(void)origin;
}

Conversion::Conversion(const std::string& input) : _intValue(0), _floatValue(0), _charValue(0), _isPrintable(false), _isFloat(false)/*, _negative(false)*/
{
	char *end(NULL);


	if (!isdigit(input.c_str()[0]) && input.length() == 1)	//non displayable character 분기
	{
		if (isprint(input.c_str()[0]))
		{
			_doubleValue = static_cast<double>(input.c_str()[0]);
			_charValue = static_cast<char>(_doubleValue);
			_intValue = static_cast<int>(_doubleValue);
			_floatValue = static_cast<float>(_doubleValue);
			_isPrintable = true;
		}
	}
	else
	{
		_doubleValue = std::strtod(input.c_str(), &end);
		if (*end == 'f')
			_isFloat = true;
		_intValue = static_cast<int>(_doubleValue);
		_floatValue = static_cast<float>(_doubleValue);
	}

// 	std::string	validCharSet("+-.01234566789");
// 	int			index(0);
// 	int			index(0);
// 	if (validCharSet.find(input.c_str()[0], 0) == std::string::npos)
// 	{
// 		if (isprint(input.c_str()[0]))
// 			_isPrintable = true;
// 	}
// 	input.c_str()[0]

// 	if (input.c_str()[0])
// //	if (input.empty())
// //		;
// //	if (input[0] == '-')	//기호가 있으면 한 칸 뒤부터 문자열 비교
// //		_negative = true;
// //	if (std::strcmp(input.substr(1, input.length() - 1))
// //	std::strcmp(input.c_str(), "nan");
// //	std::strcmp(input.c_str(), "inf");
// 	char*	point;
// 	_doubleValue = std::strtod(input.c_str(), &point);
// 	std::cout << "strtod() point: " << point << std::endl;
// 	_intValue = static_cast<int>(_doubleValue);
// 	if (!isprint(_intValue))
// 	{
// 		throw Conversion::NonDisplayable();
// 	}
// 	_charValue = static_cast<char>(_doubleValue);
// 	_floatValue = static_cast<float>(_doubleValue);
}

Conversion::~Conversion(void)
{
}

Conversion& Conversion::operator=(const Conversion& other)
{
	(void)other;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Conversion& refConversion)
{
	os << std::fixed;
	os << "char: " << refConversion.getChar() \
	<< "\nint: "  << refConversion.getInt() << std::endl;
	refConversion.printFloat(os);
	refConversion.printDouble(os);
	return (os);
}
