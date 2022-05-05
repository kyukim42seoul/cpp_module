#include "PresidentialPardonForm.hpp"

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignFlag())
	{
		throw Form::IsNotSigned();
		return (false);
	}
	if (executor.getGrade() > this->getExcuteGrade())
	{
		throw Form::GradeTooLowException();
		return (false);
	}
	else
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		return (true);
	}
}

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", false, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm", false, 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& origin)
{
	*this = origin;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this == &other)
		return (*this);
	Form::operator=(other);
	return (*this);
}
