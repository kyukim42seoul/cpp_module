#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
public:
	virtual bool	execute(Bureaucrat const & executor) const;
	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& origin);
	~RobotomyRequestForm(void);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
};

#endif
