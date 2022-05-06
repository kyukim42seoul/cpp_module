#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form* makeShrubberyForm(const std::string& target);
	Form* makeRobotomyForm(const std::string& target);
	Form* makePresidentialForm(const std::string& target);
	Intern(const Intern& origin);
	Intern&	operator=(const Intern& other);
public:
	class NoMatchForm : public std::exception
	{
		virtual const char* what(void) const throw();
	};
	Form*	makeForm(const std::string& formName, const std::string& target);
	Intern(void);
	~Intern(void);
};

#endif
