#include "Conversion.hpp"

void	Conversion::checkPesudo(const std::string& input)
{
	std::string	pesudoLiterals[7] = {"nan", "nanf", "inf", "+inf", "+inff", "-inf", "-inff"};
	int			count(0);
	while (count < 7 && input != pesudoLiterals[count])
		count++;
	switch (count)
	{
	case 0: case 1:
		_isNan = true;
		break;
	case 2: case 3: case 4:
		_positiveInfinity = true;
		break;
	case 5: case 6:
		_negativeInfinity = true;
		break;
	default:
		break;
	}
}

void	Conversion::printChar(std::ostream& os) const
{
	os << "char: ";
	if (_isNan || _positiveInfinity || _negativeInfinity || _isImpossible)
	{
		os << "impossible" << std::endl;
		return ;
	}
	if (!_isPrintable)
		os << "Non displayable" << std::endl;
	else
		os << _charValue << std::endl;
}

void	Conversion::printInt(std::ostream& os) const
{
	os << "int: ";
	if (_isNan || _positiveInfinity || _negativeInfinity || _isImpossible)
	{
		os << "impossible" << std::endl;
		return ;
	}
	else if (_doubleValue > std::numeric_limits<int>::max() || _doubleValue < std::numeric_limits<int>::lowest())
	{
		os << "impossible" << std::endl;
		return ;
	}
	os << this->_intValue << std::endl;
}

void	Conversion::printFloat(std::ostream& os) const
{
	os << "float: ";
	if (_isNan)
	{
		os << "nanf" << std::endl;
		return ;
	}
	else if (_positiveInfinity)
	{
		os << "+inff" << std::endl;
		return ;
	}
	else if (_negativeInfinity)
	{
		os << "-inff" << std::endl;
		return ;
	}
	if (_isImpossible)
	{
		os << "impossible" << std::endl;
		return ;
	}
	else if (_doubleValue > std::numeric_limits<float>::max() || _doubleValue < std::numeric_limits<float>::lowest())
	{
		os << "impossible" << std::endl;
		return ;
	}
	os << this->_floatValue;
	if (_isInteger)
		os << ".0f";
	else
		os << "f";
	os << std::endl;
}

void	Conversion::printDouble(std::ostream& os) const
{
	os << "double: ";
	if (_isNan)
	{
		os << "nan" << std::endl;
		return ;
	}
	else if (_positiveInfinity)
	{
		os << "+inf" << std::endl;
		return ;
	}
	else if (_negativeInfinity)
	{
		os << "-inf" << std::endl;
		return ;
	}
	if (_isImpossible)
	{
		os << "impossible" << std::endl;
		return ;
	}
	os << this->_doubleValue;
	if (_isInteger)
		os << ".0";
	os << std::endl;
}

Conversion::Conversion(void)
{
}

Conversion::Conversion(Conversion& origin)
{
	(void)origin;
}

Conversion::Conversion(const std::string& input)
: _intValue(0), _floatValue(0), _charValue(0), _doubleValue(0), _isPrintable(false), _isInteger(false), _isImpossible(false), _isNan(false), _positiveInfinity(false), _negativeInfinity(false)
{
	char *end(NULL);

	if (input.empty())
	{
		std::cout << "Invalid number of Arguments" << std::endl;
		_isImpossible = true;
	}
	if (!isdigit(input.c_str()[0]) && input.length() == 1)
	{
		if (isprint(input.c_str()[0]))
			_doubleValue = static_cast<double>(input.c_str()[0]);
		else
		{
			std::cout << "Non displayable + Invalid arguments";
			_isImpossible = true;
		}
	}
	else
	{
		checkPesudo(input);
		if (input.find(".", 0) == std::string::npos)
			_isInteger = true;
		_doubleValue = std::strtod(input.c_str(), &end);
		std::string	endString(end);
		if (!(endString.length() == 1 && endString.c_str()[0] == 'f'))
			_isImpossible = true;
		if (endString.c_str()[0] == '\0')
			_isImpossible = false;
	}
	_charValue = static_cast<char>(_doubleValue);
	_intValue = static_cast<int>(_doubleValue);
	if (isprint(_intValue))
		_isPrintable = true;
	if (_doubleValue > _intValue)
		_isInteger = false;
	else
		_isInteger = true;
	_floatValue = static_cast<float>(_doubleValue);
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
	refConversion.printChar(os);
	refConversion.printInt(os);
	refConversion.printFloat(os);
	refConversion.printDouble(os);
	return (os);
}
