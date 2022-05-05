#include "Bureaucrat.hpp"

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("[ EXCEPTION ][ Bureaucrat ] GradeTooHigh");
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("[ EXCEPTION ][ Bureaucrat ] GradeTooLow");
}

void	Bureaucrat::setGrade(const int& grade)
{
	_grade = grade;
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void		Bureaucrat::signForm(Form& form)
{
	
}

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat& origin) : _name(origin._name)
{
	if (origin.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (origin.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = origin.getGrade();
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	this->_grade = other._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
