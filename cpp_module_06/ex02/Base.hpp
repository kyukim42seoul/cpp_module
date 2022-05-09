#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <iostream>
#include <cstdlib>

class A;
class B;
class C;
class Base
{
public:
	Base*	generate(void);
	void	identify(Base* p);
	void	identify(Base& p);
	Base(void);
	virtual ~Base(void);
};

#endif
