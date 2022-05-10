#include "Span.hpp"

const char* Span::TooFewStored::what(void) const throw()
{
	return ("Too few arguments stored to calc span");
}

int	Span::getMin(void)
{
	return (*std::min_element(_iVector.begin(), _iVector.end()));
}

int	Span::getMax(void)
{
	return (*std::max_element(_iVector.begin(), _iVector.end()));
}

void Span::addNumber(int intValue)
{
	if (_iVector.size() == _maximumLength)
		throw std::bad_alloc();
	_iVector.push_back(intValue);
}

void	Span::fillVector(unsigned int count)
{
	if (_iVector.size() + count > _maximumLength)
		throw std::bad_alloc();
	else
	{
		for (unsigned int index = 0; index < count; index++)
			_iVector.push_back(rand());
	}
}

std::size_t	Span::shortestSpan(void)
{
	if (_iVector.size() <= 1)
		throw TooFewStored();
	else
	{
		std::vector<int>	vectorBuf(_iVector.begin(), _iVector.end());
		std::sort(vectorBuf.begin(), vectorBuf.end());
		std::vector<int>::iterator	prevIter = vectorBuf.begin();
		int	Span = *(prevIter + 1) - *prevIter;
		prevIter++;
		while (prevIter + 2 != vectorBuf.end())
		{
			if (*(prevIter + 1) - *prevIter < Span)
				Span = *(prevIter + 1) - *prevIter;
			prevIter++;
		}
		return (Span);
	}
}

std::size_t	Span::longestSpan(void)
{
	if (_iVector.size() <= 1)
		throw TooFewStored();
	else
	{
		std::cout << "Inner Min: " << *std::min_element(_iVector.begin(), _iVector.end()) << std::endl;
		std::cout << "Inner Max: " << *std::max_element(_iVector.begin(), _iVector.end()) << std::endl;
		return (*std::max_element(_iVector.begin(), _iVector.end()) - *std::min_element(_iVector.begin(), _iVector.end()));
	}
}

Span::Span(void) : _maximumLength(0), _iVector(0)
{
	std::cout << "Default Constructor" << std::endl;
}

Span::Span(const Span& origin)
{
	(void)origin;
}

Span::Span(unsigned int N) : _maximumLength(N)
{
}

Span::~Span(void)
{
}

Span& Span::operator=(const Span& other)
{
	(void)other;
	return (*this);
}
