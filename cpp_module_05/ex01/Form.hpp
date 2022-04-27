#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>


class Form
{
private:
	const std::string	_name;
	bool				isSigned;
	const int			signGrade;
	const int			excuteGrade;
public:
	Form(void);
	Form(const Form& origin);
	~Form(void);
	Form& operator=(const Form& other);
};

#endif
