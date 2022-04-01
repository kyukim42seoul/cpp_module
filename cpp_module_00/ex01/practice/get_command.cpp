/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_command.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:29:35 by kyukim            #+#    #+#             */
/*   Updated: 2022/03/18 17:37:02 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
class get_command
- 안내 문구 출력
- 입력된 문자열 전달
- 커맨드 유효성 검사
	- 연락처는 연속되는 숫자로
*/

# include "phonebook.hpp"

class listener
{
	private :
		int	process_count;	//0 : Nothing 1 : ADD 2 : SEARCH
		int	field_type;		//0 : Nothing 1-1 : Firstname ... 2-1 : index
	public :
		listener()
		{
			process_count = 0;
			field_type = 0;
		}
		int		look_process(char *argv);
		int		check_command(char *command);
		int		check_value(char *value);
		int		check_index(char *number);
		int		*get_flag();
		void	cout_flag();
		void	reset_flag();
};

int	listener::look_process(char *argv)
{
	int	result = 0;

	if (process_count == 0)
		result = check_command(argv);
	else if (process_count == 1)		// 앞에서 ADD 가 입력된 상황
		result = check_value(argv);
	else if (process_count == 2)		// 앞에서 SEARCH 가 입력된 상황
		result = check_index(argv);
	return (result);
}

int	listener::check_command(char *cmd)
{
	int	result = 0;

	if (strcmp(cmd, "ADD") == 0)
		process_count = 1;
	else if (strcmp(cmd, "SEARCH") == 0)
		process_count = 2;
	else
		result = 1;
	return (result);
}

int	listener::check_value(char *value)
{
	int	result = 0;
	int	index = 0;

	if (field_type == 0)
	{
		cout << "Please enter first name" << endl;
		field_type = 2;
	}
	else if (field_type == 2)
	{
		while (value[index])
		{
			if (isalpha(value[index]) == false)
			{
				result = 1;
				return (result);
			}
			index++;
		}
		cout << "Please enter last name" << endl;
		field_type = 3;
	}
	else if (field_type == 3)
	{
		while (value[index])
		{
			if (isalpha(value[index]) == false)
			{
				result = 1;
				return (result);
			}
			index++;
		}
		cout << "Please enter nickname" << endl;
		field_type = 4;
	}
	else if (field_type == 4)
	{
		while (value[index])
		{
			if (isalpha(value[index]) || isdigit(value[index]))
			{
				result = 1;
				return (result);
			}
			index++;
		}
		cout << "Please enter phone number" << endl;
		field_type = 5;
	}
	else if (field_type == 5)
	{
		while (value[index])
		{
			if (isdigit(value[index]) == false)
			{
				result = 1;
				return (result);
			}
			index++;
		}
		cout << "Please enter secret" << endl;
		field_type = 6;
	}
	else if (field_type == 6)
	{
		field_type = 0;
	}
	return (result);
}

int	listener::check_index(char *number)
{
	int	index = 0;
	int	result = 0;

	while (number[index])
	{
		if (isdigit(number[index]) == false)
		{
			result = 1;
			return (result);
		}
		index++;
	}
	return (result);
}

void	listener::cout_flag()
{
	cout << process_count << ' ' << field_type << endl;
}

void	listener::reset_flag()
{
	process_count = 0;
	field_type = 0;
}
