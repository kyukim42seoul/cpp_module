#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span
{
private:
	unsigned int		_maximumLength;
	std::vector<int>	_iVector;
public:
	class TooFewStored : public std::exception
	{
	public:
		const char* what(void) const throw();
	};
	int					getMin(void);
	int					getMax(void);
	void				addNumber(const int intValue);
	void				fillVector(unsigned int count);
	std::size_t			shortestSpan(void);
	std::size_t			longestSpan(void);
	Span(void);
	Span(const Span& origin);
	Span(unsigned int N);
	~Span(void);
	Span& operator=(const Span& other);
};

#endif
