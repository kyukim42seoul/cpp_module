#include "Conversion.hpp"

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

Conversion::Conversion(void)
{
}

Conversion::Conversion(const std::string& input) : _intValue(0), _floatValue(0), _charValue(0), _negative(false)
{
	//처리 -/+inf(f)/nan(f), 0
	if (input[0] == '-')	//기호가 있으면 한 칸 뒤부터 문자열 비교
		_negative = true;
	std::strcmp(input.c_str(), "nan");
	std::strcmp(input.c_str(), "inf");
	char*	point;
	_doubleValue = std::strtod(input.c_str(), &point);
	std::cout << "strtod() point: " << point << std::endl;
	_intValue = static_cast<int>(_doubleValue);
	_floatValue = static_cast<float>(_doubleValue);
	_charValue = static_cast<char>(_doubleValue);
}

Conversion::~Conversion(void)
{
}

std::ostream&	operator<<(std::ostream& os, const Conversion& refConversion)
{
	os << std::fixed;
	os << std::setprecision(7) \
	os << std::setprecision(15) \
	<< "char: " << refConversion.getChar() \
	<< "\nint: "  << refConversion.getInt() \
	<< "\nfloat: "  << refConversion.getFloat() << "f" \
	<< "\ndouble: "  << refConversion.getDouble() << std::endl;;
	return (os);
}
