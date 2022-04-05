#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : cmd_add("ADD"), cmd_search("SEARCH"), cmd_exit("EXIT")
{
}

void	PhoneBook::get_cmd()
{
	guide(0);
	std::getline(std::cin, cmd);
	for (int index = 0; index < cmd.length(); index++)
		cmd[index] = std::toupper(cmd[index]);
}

void	PhoneBook::set_flag()
{
	if (cmd == cmd_add)
		flag = 1;
	else if (cmd == cmd_search)
		flag = 2;
	else if (cmd == cmd_exit)
		flag = 3;
}

int	PhoneBook::get_flag()
{
	return (flag);
}

void	PhoneBook::clear_flag()
{
	flag = 0;
}

void	PhoneBook::add()
{
	static int	index;

	for (int count = 0; count < 5; count++)
	{
		guide(count);
		std::getline(std::cin, buf[count]);
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
		if (!util.isPrintable(buf[count]))
		{
			std::cout << "[ERR] Unprintable input" << std::endl;
			count--;
		}
		else if (count == 3 && !util.isNumber(buf[count]))
		{
			std::cout << "[ERR] Need number input" << std::endl;
			count--;
		}
		else if (buf[count] == "")
		{
			std::cout << "[ERR] No empty field" << std::endl;
			count--;
		}
	}
	if (index > 7)
		index = 0;
	list[index].set(buf[0], buf[1], buf[2], buf[3], buf[4]);
	index++;
}

void	PhoneBook::search()
{
	std::string	input;
	int		target;
	int		ret;

	ret = 0;
	for (int index = 0; index < 8; index++)
		list[index].show_summary(index);
	while (true)
	{
		guide(0);
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
		std::stringstream buf(input);
		buf >> target;
		if (buf.fail())
		{
			std::cout << "[ERR] Need valid index" << std::endl;
			buf.clear();
		}
		else if (target < 0 || target > 7)
			std::cout << "[ERR] Invalid index" << std::endl;
		else
			break ;
	}
	list[target].show_full();
}

void	PhoneBook::guide(int count)
{
	if (flag == 0 && count == 0)
		std::cout << "Please input cmd" << std::endl;
	else if (flag == 1 && count == 0)
		std::cout << "Please input first name" << std::endl;
	else if (flag == 1 && count == 1)
		std::cout << "Please input last name" << std::endl;
	else if (flag == 1 && count == 2)
		std::cout << "Please input nick name" << std::endl;
	else if (flag == 1 && count == 3)
		std::cout << "Please input phone number" << std::endl;
	else if (flag == 1 && count == 4)
		std::cout << "Please input darkest secret" << std::endl;
	else if (flag == 2 && count == 0)
		std::cout << "Please input index" << std::endl;
}

void	PhoneBook::move_forward()
{
	for (int count = 0; count < 7; count++)
		list[count] = list[count + 1];
}

PhoneBook::~PhoneBook()
{
	;
}