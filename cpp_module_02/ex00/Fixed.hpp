#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	int					fixed_point_number;
	static const int	number_of_fractional_bits;
public:
	Fixed(void);
	Fixed(const Fixed &other);
	~Fixed(void);
	Fixed&	operator=(Fixed& other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	void	show(void);
};

#endif
