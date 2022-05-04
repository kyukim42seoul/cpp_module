#include "Fixed.hpp"

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
	return ((float)this->fixed_point_number / (1 << 8));
}

int			Fixed::toInt(void) const
{
	return (this->fixed_point_number >> 8);
}

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

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_obj)
{
	os << fixed_obj.toFloat();
	return (os);
}
