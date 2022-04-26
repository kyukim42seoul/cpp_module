#include "Fixed.hpp"

int	main()
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const c(42.42f);
	Fixed const cc(42);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "-----compare test-----" << std::endl;

	std::cout << (c > cc) << std::endl;
	std::cout << (c >= cc) << std::endl;
	std::cout << (c < cc) << std::endl;
	std::cout << (c <= cc) << std::endl;
	std::cout << (c == cc) << std::endl;
	std::cout << (c != cc) << std::endl;

	std::cout << "-----arithmetic test-----" << std::endl;

	Fixed	temp;

	temp = c + b;
	std::cout << "TEST : plus : ";
	std::cout << temp.toFloat() << std::endl;
	temp = c - b;
	std::cout << "TEST : minus : ";
	std::cout << temp.toFloat() << std::endl;
	temp = c * b;
	std::cout << "TEST : multiple : ";
	std::cout << temp.toFloat() << std::endl;
	temp = c / b;
	std::cout << "TEST : divide : ";
	std::cout << temp.toFloat() << std::endl;

	std::cout << "-----increase/decrease test-----" << std::endl;

	Fixed	ttemp(12.43f);

	std::cout << "pre increase : ";
	std::cout << ++ttemp << std::endl;
	std::cout << "post increase" << std::endl;
	std::cout << ttemp++ << std::endl;
	std::cout << "pre decrease : ";
	std::cout << --ttemp << std::endl;
	std::cout << "post decrease" << std::endl;
	std::cout << ttemp-- << std::endl;

	std::cout << "-----min/max test-----" << std::endl;

	Fixed	min_a(12.43f);
	Fixed	min_b(20.57f);

	std::cout << "min : ";
	std::cout << min_a.min(min_a, min_b) << std::endl;
	std::cout << "static const min : ";
	std::cout << Fixed::min(min_a, min_b) << std::endl;
	std::cout << "max : ";
	std::cout << min_a.max(min_a, min_b) << std::endl;
	std::cout << "static const max : ";
	std::cout << Fixed::max(min_a, min_b) << std::endl;

	return (EXIT_SUCCESS);
}
