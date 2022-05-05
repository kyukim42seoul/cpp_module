#include "RobotomyRequestForm.hpp"

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
		if (rand() % 2)
		{
			std::cout << "[ SUCCESS ] " << std::endl;
			std::cout << _target << " has been robotomized" << std::endl;
		}
		else
		{
			std::cout << "[ FAIL ] " << std::endl;
			std::cout << _target << " has failed robotomized" << std::endl;
		}
		return (true);
	}
}

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", false, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("RobotomyRequestForm", false, 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& origin)
{
	*this = origin;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this == &other)
		return (*this);
	Form::operator=(other);
	return (*this);
}
