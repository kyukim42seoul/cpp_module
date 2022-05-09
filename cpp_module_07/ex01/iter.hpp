#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template <typename T>
void	iter(T* array, size_t length, void(*funcPtr)(T& val))
{
	for (size_t index = 0; index < length; index++)
		funcPtr(array[index]);
}

template <typename T>
void	print(T& input)
{
	std::cout << input << std::endl;
}

#endif
