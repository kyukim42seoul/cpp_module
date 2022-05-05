#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string	_target;
public:
	virtual bool	execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& origin);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
};

#endif
