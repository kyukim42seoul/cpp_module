#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

/*
	IEEE754 기준
	공통
		sign 0 = 양수, sign 1 = 음수
		bias for 32bit = 127
			bias 를 쓰는 이유 : 지수가 음수일 수 있어서
			지수부 8bit 로 표현 가능한 수(0 ~ 255) 안에서 지수의 음수/양수 영역 설정
			0 ~ 127 : 음수, 128 ~ 255 : 양수
			보통 0, 255 는 0에 한없이 가까운 수, 무한에 가까운 수 등 특별한 수를 위해서 활용.(기존 지수부 계산과 별도)
	32bit 부동 소수점 저장 방식
		sign/지수/가수
		1/8/23 bits
		지수 = 지수 + bias 를 이진화한 비트를 저장
	8bit 고정 소수점 저장 방식
		sign/정수/소수
		1/23/8 bits
*/

/*
 The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators, that will increase or decrease the fixed-point value from the smallest representable ε such as 1 + ε > 1.
*/

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
	static Fixed&		min(Fixed& one, Fixed& two);
	const static Fixed&	min(const Fixed& one, const Fixed& two);
	static Fixed&		max(Fixed& one, Fixed& two);
	const static Fixed&	max(const Fixed& one, const Fixed& two);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream&			operator<<(std::ostream& os, const Fixed& fixed);

#endif
