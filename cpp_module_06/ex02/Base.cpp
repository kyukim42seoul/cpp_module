#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	Base::generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (new A());
	}
	return (NULL);
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "It's A class pointer" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "It's B class pointer" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "It's C class pointer" << std::endl;
	else
		std::cout << "What is it?" << std::endl;
}

void	Base::identify(Base& p)
{
	try
	{
		A& refA = dynamic_cast<A&>(p);
		std::cout << "It's A class pointer" << std::endl;
		static_cast<void>(refA);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		B& refB = dynamic_cast<B&>(p);
		std::cout << "It's B class pointer" << std::endl;
		static_cast<void>(refB);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		C& refC = dynamic_cast<C&>(p);
		std::cout << "It's C class pointer" << std::endl;
		static_cast<void>(refC);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Base::Base(void)
{
	std::cout << "Base: Default Constructor" << std::endl;
}

Base::~Base(void)
{
	std::cout << "Base: Default Destructor" << std::endl;
}
