#include "ShrubberyCreationForm.hpp"

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
		std::ifstream	fin;

		fin.open("Shrubbery.txt");
		if (!fin.good())
		{
			std::cout << "Fail fin.open()" << std::endl;
			return (false);
		}
		std::string		fullText;
		std::string		lineBuf;

		while (!fin.eof())
		{
			std::getline(fin, lineBuf);
			fullText += lineBuf;
			fullText += "\n";
		}
		fin.close();

		std::string		fileName(_target);

		fileName += "_shrubbery";
		std::ofstream	fout(fileName.c_str());
		if (!fout.good())
		{
			std::cout << "Fail init fout" << std::endl;
			return (false);
		}
		fout << fullText;
		fout.close();
		return (true);
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", false, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", false, 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& origin)
{
	*this = origin;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this == &other)
		return (*this);
	Form::operator=(other);
	return (*this);
}
