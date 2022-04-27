#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat& origin)
{
	*this = origin;
}

Bureaucrat::Bureaucrat(const std::string& name) : name(name)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	*this = other;
	return (*this);
}

/*
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->grade = other.grade;
	return (*this);
}
*/