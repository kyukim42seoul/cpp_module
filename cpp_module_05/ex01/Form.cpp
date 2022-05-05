#include "Form.hpp"
#include "Bureaucrat.hpp"

bool	Form::beSigned(Bureaucrat user)
{
	if (user.getGrade() < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (user.getGrade() > 150)
	{
		throw Form::GradeTooLowException();
	}
	if (user.getGrade() < _signGrade)
	{
		_sign = 1;
	}
	else
		throw Form::GradeTooLowException();
}

Form::Form(const Form& origin)
: _name(origin._name), _sign(origin._sign), _signGrade(origin._signGrade), _excuteGrade(origin._excuteGrade)
{
	if (origin._signGrade < 0 || origin._excuteGrade < 0)
	{
		throw Form::GradeTooHighException();
	}
	else if (origin._signGrade > 150 || origin._excuteGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::Form(const std::string name, bool sign, const int signGrade, const int excuteGrade)
: _name(name), _sign(sign), _signGrade(signGrade), _excuteGrade(excuteGrade)
{
}

Form::~Form(void)
{
}

Form& Form::operator=(const Form& other)
{
	if (this == &other)
		return (*this);
	this->_sign = other._sign;
	return (*this);
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("[ Exception ][ Form ] GradeTooHigh");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("[ Exception ][ Form ] GradeTooLow");
}

std::ostream&	operator<<(std::ostream& os, const Form& ref_bureaucrat)
{

}


