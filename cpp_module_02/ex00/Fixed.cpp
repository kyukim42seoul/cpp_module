#include "Fixed.hpp"

const int	Fixed::number_of_fractional_bits = 8;

Fixed::Fixed(void) : fixed_point_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_number = other.getRawBits();
}

Fixed& Fixed::operator=(Fixed& other)
{
	Fixed&	ref_this = *this;

	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_number = other.getRawBits();
	return (ref_this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	int	raw = fixed_point_number >> this->number_of_fractional_bits;
	return (raw);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits Done" << std::endl;
	fixed_point_number = raw << this->number_of_fractional_bits;
}
