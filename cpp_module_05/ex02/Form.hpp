#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const unsigned int	_signGrade;
	const unsigned int	_excuteGrade;
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};

	class IsNotSigned : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};
	std::string		getName(void) const;
	bool			getSignFlag(void) const;
	unsigned int	getSignGrade(void) const;
	unsigned int	getExcuteGrade(void) const;
	bool			beSigned(Bureaucrat user);
	virtual bool	execute(Bureaucrat const & executor) const = 0;
	Form(void);
	Form(const Form& origin);
	Form(const std::string name, bool sign, const unsigned int signGrade, const unsigned int excuteGrade);
	~Form(void);
	Form&	operator=(const Form& other);
};

std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif
