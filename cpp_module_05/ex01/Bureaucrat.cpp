#include "Bureaucrat.hpp"
#include "Form.hpp"

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("[ EXCEPTION ] GradeTooHigh");
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("[ EXCEPTION ] GradeTooLow");
}

void	Bureaucrat::setGrade(const int& grade)
{
	_grade = grade;
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::increaseGrade(unsigned int amount)
{
	if (amount >= _grade)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= amount;
}

void	Bureaucrat::decreaseGrade(unsigned int amount)
{
	if (amount + _grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += amount;
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		if (form.beSigned(*this))
			std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " <<  e.what() << std::endl;
	}
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
	else
		_grade = origin.getGrade();
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
	{
		std::cout << "Test" << std::endl;
		return (*this);
	}
	this->_grade = other._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
