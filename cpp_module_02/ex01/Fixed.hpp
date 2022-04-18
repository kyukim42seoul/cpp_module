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
	Fixed&		operator = (Fixed& other);
	int			getRawBits(void) const;			//fixed_point ... 을 가지고 처음 주어진 int 형 비트를 반환
	void		setRawBits(int const raw);		//raw 로 주어진 bit 를 고정 소수점 방식으로 fixed_point... 에 저장
	float		toFloat(void) const;
	int			toInt(void) const;
};

std::ostream&	operator << (std::ostream& os, const Fixed& fixed);

#endif