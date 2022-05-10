#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>
#include <exception>

template<typename T>
class Array
{
private:
	T*		_array;
	size_t	_size;
public:
	class OutOfBound : public std::exception
	{
	public:
		const char* what(void) const throw()
		{
			return ("[ Index Error ] Out of Bound");
		};
	};
	void		fillArray(T* inputArray, int length);
	const T*	getArray(void) const;
	size_t		size(void) const;
	Array(void);
	Array(const Array& origin);
	Array(unsigned int n);
	~Array(void);
	Array&		operator=(const Array& other);
	T&			operator[](unsigned int index);
	const T&	operator[](const unsigned int index) const;
};

template<typename T>
void Array<T>::fillArray(T* inputArray, int length)
{
	for (int index = 0; index < length; index++)
	{
		_array[index] = inputArray[index];
	}
}

template<typename T>
const T*	Array<T>::getArray(void) const
{
	return (_array);
}

template<typename T>
size_t	Array<T>::size(void) const
{
	return (_size);
}

template<typename T>
Array<T>::Array(void) : _size(0)
{
	std::cout << "Default Constructor" << std::endl;
	_array = new T();
}

template<typename T>
Array<T>::Array(const Array& origin) : _size(0)
{
	std::cout << "Copy Constructor" << std::endl;
	_array = new T();
	*this = origin;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	std::cout << "Overload Constructor" << std::endl;
	_array = new T[n];
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] _array;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	std::cout << "Operator =" << std::endl;
	if (this == &other)
		return (*this);
	delete[] _array;
	_array = new T[other._size];
	for (unsigned int index = 0; index < other._size; index++)
		this->_array[index] = other._array[index];
	return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw Array<T>::OutOfBound();
	else
		return (_array[index]);
}

template<typename T>
const T& Array<T>::operator[](const unsigned int index) const
{
	if (index >= _size)
		throw Array<T>::OutOfBound();
	else
		return (_array[index]);
}

#endif
