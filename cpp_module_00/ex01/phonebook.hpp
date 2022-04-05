#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include "main.hpp"
#include "Contact.hpp"
#include "Util.hpp"

class Contact;
class Util;

class PhoneBook
{
	private:
		Contact				list[8];
		Util				util;
		std::string			cmd;
		std::string			buf[5];
		int					flag;
		const std::string	cmd_add;
		const std::string	cmd_search;
		const std::string	cmd_exit;
	public:
		PhoneBook(void);
		~PhoneBook();
		void	get_cmd();
		void	set_flag();
		int		get_flag();	
		void	clear_flag();
		void	add();
		void	search();
		void	guide(int count);
		void	move_forward();
};

#endif