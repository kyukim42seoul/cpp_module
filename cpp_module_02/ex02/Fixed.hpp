#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					fixed_point_number;
	static const int	number_of_fractional_bits = 8;
public:
	Fixed(void);
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &other);
	~Fixed();
	bool				operator>(const Fixed& other) const;
	bool				operator>=(const Fixed& other) const;
	bool				operator<(const Fixed& other) const;
	bool				operator<=(const Fixed& other) const;
	bool				operator==(const Fixed& other) const;
	bool				operator!=(const Fixed& other) const;
	Fixed				operator+(const Fixed& other) const;
	Fixed				operator-(const Fixed& other) const;
	Fixed				operator*(const Fixed& other) const;
	Fixed				operator/(const Fixed& other) const;
	Fixed&				operator++(void);
	Fixed				operator++(int);
	Fixed&				operator--(void);
	Fixed				operator--(int);
	Fixed&				operator=(const Fixed& other);
	static Fixed&		min(Fixed& A, Fixed& B);
	const static Fixed&	min(const Fixed& A, const Fixed& B);
	static Fixed&		max(Fixed& A, Fixed& B);
	const static Fixed&	max(const Fixed& A, const Fixed& B);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream&			operator<<(std::ostream& os, const Fixed& fixed);

#endif
