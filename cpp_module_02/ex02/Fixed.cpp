#include "Fixed.hpp"

/* 연산자 오버로딩 참고
Contact& Contact::operator = (Contact& other)
{
	Contact&	ref_this = *this;

	this->first_name = other.first_name;
	this->last_name = other.last_name;
	this->nick_name = other.nick_name;
	this->phone_number = other.phone_number;
	this->darkest_secret = other.darkest_secret;
	return (ref_this);
}
*/

Fixed::Fixed(void) : fixed_point_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	std::cout << "[INT] Default constructor called" << std::endl;
	fixed_point_number = number << this->number_of_fractional_bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "[FLOAT] Default constructor called" << std::endl;
	fixed_point_number = roundf(number * (1 << 8));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

bool		Fixed::operator>(const Fixed& other) const
{
	return (this->fixed_point_number > other.fixed_point_number);
}
bool		Fixed::operator>=(const Fixed& other) const
{
	return ((this->fixed_point_number > other.fixed_point_number) || (this->fixed_point_number == other.fixed_point_number));
}
bool		Fixed::operator<(const Fixed& other) const
{
	return (this->fixed_point_number < other.fixed_point_number);
}
bool		Fixed::operator<=(const Fixed& other) const
{
	return ((this->fixed_point_number < other.fixed_point_number) || (this->fixed_point_number == other.fixed_point_number));
}
bool		Fixed::operator==(const Fixed& other) const
{
	return ((this->fixed_point_number == other.fixed_point_number));
}
bool		Fixed::operator!=(const Fixed& other) const
{
	return ((this->fixed_point_number != other.fixed_point_number));
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++(void)
{
	this->fixed_point_number = roundf((this->toFloat() + 1) * (1 << 8));
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	pre_value;

	pre_value = *this;
	++*this;
	return (pre_value);
}

Fixed& Fixed::operator--(void)
{
	this->fixed_point_number = roundf((this->toFloat() - 1) * (1 << 8));
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	pre_value;

	pre_value = *this;
	--*this;
	return (pre_value);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	Fixed&	ref_this = *this;

	std::cout << "Copy assignment operator called" << std::endl;
	ref_this.setRawBits(other.getRawBits());
	return (ref_this);
}

Fixed& Fixed::min(Fixed& one, Fixed& two)
{
	int	compare_result = one < two;

	switch (compare_result)
	{
		case 1:
			return one;
		case 0:
			return two;
		default:
			return two;
	}
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two)
{
	int	compare_result = one < two;

	switch (compare_result)
	{
		case 1:
			return one;
		case 0:
			return two;
		default:
			return one;
	}
}

Fixed& Fixed::max(Fixed& one, Fixed& two)
{
	int	compare_result = one > two;

	switch (compare_result)
	{
		case 1:
			return one;
		case 0:
			return two;
		default:
			return one;
	}
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two)
{
	int	compare_result = one > two;

	switch (compare_result)
	{
		case 1:
			return one;
		case 0:
			return two;
		default:
			return one;
	}
}

int		Fixed::getRawBits(void) const
{
	return (this->fixed_point_number);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_number = raw;
}

float	Fixed::toFloat(void) const
{
	float	temp;

	temp = (float)this->fixed_point_number / (1 << 8);
	return (temp);
}

int			Fixed::toInt(void) const
{
	int	temp;

	temp = this->fixed_point_number >> 8;
	return (temp);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_obj)
{
	os << fixed_obj.toFloat();
	return (os);
}
