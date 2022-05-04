#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	int					fixed_point_number;
	static const int	number_of_fractional_bits = 8;
public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed(void);
	Fixed(const Fixed &origin);
	~Fixed(void);
	Fixed&	operator=(const Fixed& other);
};

#endif
