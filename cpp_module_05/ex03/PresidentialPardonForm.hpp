#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	virtual bool	execute(Bureaucrat const & executor) const;
	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& origin);
	~PresidentialPardonForm(void);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
};

#endif
