#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact(void);
		~Contact();
		void	set(std::string first, std::string last, std::string nick, std::string number, std::string secret);
		void	show_summary(int index);
		void	show_full(void);
		Contact& operator = (Contact& other);
};

#endif
