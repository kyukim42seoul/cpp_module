#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int		_grade;
public:
	class GradeTooHighException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
	void			setGrade(const int& grade);
	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	void			increaseGrade(unsigned int amount);
	void			decreaseGrade(unsigned int amount);
	Bureaucrat(void);
	Bureaucrat(Bureaucrat& origin);
	Bureaucrat(const std::string& name, int grade);
	~Bureaucrat(void);
	Bureaucrat& operator=(const Bureaucrat& other);
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref_bureaucrat);

#endif
