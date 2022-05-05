#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>

class Bureaucrat;
class Form
{
private:
	const std::string	_name;
	bool				_sign;
	const int			_signGrade;
	const int			_excuteGrade;
public:
	bool	beSigned(Bureaucrat user);
//	Form(void);
	Form(const Form& origin);
	Form(const std::string name, bool sign, const int signGrade, const int excuteGrade);
	~Form(void);
	Form&	operator=(const Form& other);
	class GradeTooHighException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
};

std::ostream&	operator<<(std::ostream& os, const Form& ref_bureaucrat);

#endif
