#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat& origin);
	Bureaucrat(const std::string& name);
	~Bureaucrat(void);
	Bureaucrat& operator=(const Bureaucrat& other);
};

#endif
