#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <deque>
#include <list>


template<class T>
class T::const_iterator easyfind(T a, int b)
{
	class T::const_iterator iter = std::find(a.begin(), a.end(), b);
	if (iter == a.end())
		throw std::runtime_error("Fail: easyfind()");
	return (iter);
}

#endif
