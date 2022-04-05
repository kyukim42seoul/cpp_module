#include "PhoneBook.hpp"

Contact::Contact(void)
{
};

Contact::~Contact()
{
};

void	Contact::set(std::string first, std::string last, std::string nick, std::string number, std::string secret)
{
	first_name = first;
	last_name = last;
	nick_name = nick;
	phone_number = number;
	darkest_secret = secret;
};

void	Contact::show_summary(int index)
{
	std::cout << std::setw(10) << index;
	std::cout << '|';
	if (first_name.length() > 10)
		std::cout << std::setw(9) << first_name.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << first_name.substr(0, 10);
	std::cout << '|';
	if (last_name.length() > 10)
		std::cout << std::setw(9) << last_name.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << last_name.substr(0, 10);
	std::cout << '|';
	if (nick_name.length() > 10)
		std::cout << std::setw(9) << nick_name.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << nick_name.substr(0, 10);
	std::cout << std::endl;
}

void	Contact::show_full()
{
	std::cout << "first_name : " << first_name << std::endl;
	std::cout << "last_name : " << last_name << std::endl;
	std::cout << "nick_name : " << nick_name << std::endl;
	std::cout << "phone_number : " << phone_number << std::endl;
	std::cout << "darkest_secret : " << darkest_secret << std::endl;
}

Contact& Contact::operator = (Contact& other)
{
	Contact&	ref_this = *this;

	this->first_name = other.first_name;
	this->last_name = other.last_name;
	this->nick_name = other.nick_name;
	this->phone_number = other.phone_number;
	this->darkest_secret = other.darkest_secret;
	return (ref_this);
}
