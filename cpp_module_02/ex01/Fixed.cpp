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

/*
	It converts it to the corresponding fixed-point value. The fractional bits value is initialized to 8 like in exercise 00.
*/
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

Fixed& Fixed::operator = (const Fixed& other)
{
	Fixed&	ref_this = *this;

	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (ref_this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->fixed_point_number >> 8);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_number = raw << 8;
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

std::ostream&	operator << (std::ostream& os, const Fixed& fixed_obj)
{
	os << fixed_obj.toFloat();
	return (os);
}
