#include "Form.hpp"

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("[ Exception ][ Form ] GradeTooHigh");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("[ Exception ][ Form ] GradeTooLow");
}

const char* Form::IsNotSigned::what(void) const throw()
{
	return ("[ Exception ][ Form ] IsNotSignedForm");
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSignFlag(void) const
{
	return (_isSigned);
}

unsigned int	Form::getSignGrade(void) const
{
	return (_signGrade);
}

unsigned int	Form::getExcuteGrade(void) const
{
	return (_excuteGrade);
}

bool	Form::beSigned(Bureaucrat user)
{
	if (user.getGrade() > _signGrade)
	{
		throw Form::GradeTooLowException();
		return (false);
	}
	else
	{
		_isSigned = true;
		return (true);
	}
}

Form::Form(void) : _isSigned(false), _signGrade(150), _excuteGrade(150)
{
}

Form::Form(const Form& origin)
: _name(origin._name), _isSigned(origin._isSigned), _signGrade(origin._signGrade), _excuteGrade(origin._excuteGrade)
{
	if (origin._signGrade < 1 || origin._excuteGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (origin._signGrade > 150 || origin._excuteGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::Form(const std::string name, bool sign, const unsigned int signGrade, const unsigned int excuteGrade)
: _name(name), _isSigned(sign), _signGrade(signGrade), _excuteGrade(excuteGrade)
{
	if (signGrade < 1 || excuteGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (signGrade > 150 || excuteGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::~Form(void)
{
}

Form& Form::operator=(const Form& other)
{
	if (this == &other)
		return (*this);
	this->_isSigned = other._isSigned;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	os << "Form name : " << form.getName() << "\nsignFlag : " << form.getSignFlag() << "\nsignGrade : " << form.getSignGrade() << "\nexcuteGrade : " << form.getExcuteGrade();
	return (os);
}
