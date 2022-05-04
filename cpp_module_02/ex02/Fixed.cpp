#include "Fixed.hpp"

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
	this->fixed_point_number++;
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
	this->fixed_point_number--;
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
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed& Fixed::min(Fixed& A, Fixed& B)
{
	if (A > B)
		return (B);
	else
		return (A);

}

const Fixed& Fixed::min(const Fixed& A, const Fixed& B)
{
	if (A > B)
		return (B);
	else
		return (A);
}

Fixed& Fixed::max(Fixed& A, Fixed& B)
{
	if (A < B)
		return (B);
	else
		return (A);
}

const Fixed& Fixed::max(const Fixed& A, const Fixed& B)
{
	if (A < B)
		return (B);
	else
		return (A);
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
	return ((float)this->fixed_point_number / (1 << 8));
}

int			Fixed::toInt(void) const
{
	return (this->fixed_point_number >> 8);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed_obj)
{
	os << fixed_obj.toFloat();
	return (os);
}
