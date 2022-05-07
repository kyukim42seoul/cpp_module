#include "Intern.hpp"

const char * Intern::NoMatchForm::what(void) const throw()
{
	return ("[ EXCEPTION ] NoMatchForm");
}

Form* Intern::makeShrubberyForm(const std::string& target)
{
	Form*	newForm = new ShrubberyCreationForm(target);

	return (newForm);
}

Form* Intern::makeRobotomyForm(const std::string& target)
{
	Form*	newForm = new RobotomyRequestForm(target);

	return (newForm);
}

Form* Intern::makePresidentialForm(const std::string& target)
{
	Form*	newForm = new PresidentialPardonForm(target);

	return (newForm);
}

Form*	Intern::makeForm(const std::string& formName, const std::string& target)
{
	Form*		newForm;
	Form*		(Intern::*funcPtr[3])(const std::string& target);
	std::string	presetForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	funcPtr[0] = &Intern::makeShrubberyForm;
	funcPtr[1] = &Intern::makeRobotomyForm;
	funcPtr[2] = &Intern::makePresidentialForm;

	int	index(0);
	while (formName != presetForms[index] && index < 3)
		index++;
	switch (index)
	{
	case 3:
		throw Intern::NoMatchForm();
		break;
	default:
		newForm = (this->*funcPtr[index])(target);
		return (newForm);
		break;
	}
	return (NULL);
}

Intern::Intern(void)
{
}

Intern::Intern(const Intern& origin)
{
	(void)origin;
}

Intern::~Intern(void)
{
}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}
