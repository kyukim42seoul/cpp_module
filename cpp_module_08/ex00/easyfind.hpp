#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <deque>
#include <list>


template<typename T>
typename T::const_iterator easyfind(T a, int b)
{
	typename T::const_iterator iter = std::find(std::begin(a), std::end(a), b);
	// if (iter == a.end)
	// 	throw std::runtime_error("Fail: easyfind()");
	return (iter);
}

#endif
