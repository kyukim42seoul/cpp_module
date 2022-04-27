#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	void		setGrade(const int& grade);
	std::string	getName(void) const;
	int			getGrade(void) const;
	Bureaucrat(void);
	Bureaucrat(Bureaucrat& origin);
	Bureaucrat(const std::string& name);
	~Bureaucrat(void);
	Bureaucrat& operator=(const Bureaucrat& other);
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref_bureaucrat);

#endif
