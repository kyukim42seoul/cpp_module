/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:32 by kyukim            #+#    #+#             */
/*   Updated: 2022/04/05 22:03:07 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/*
	표준입력을 받을 때, cpp 스타일을 쓰라고 하는 말이
	int main(char *argv[]) 대신 std::cin 을 쓰라는 듯?
*/

class megaphone
{
	private:
		int				index;
		std::string			noise;
	public:
		megaphone()
		{
			set();
		}
		void	set();
		void	basic_noise();
		std::string	make_louder(std::string message);
};

void	megaphone::set()
{
	index = 0;
	noise = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

void	megaphone::basic_noise()
{
	std::cout << noise << std::endl;
}

std::string megaphone::make_louder(std::string message)
{
	while (message[index])
	{
		if (message[index] >= 97 && message[index] <= 122)
			message[index] -= 32;
		index++;
	}
	return (message);
}

int main(int argc, char *argv[])
{
	int			index;
	megaphone	megaphone;
	std::string		message;

	index = 1;
	if (argc < 2)
		megaphone.basic_noise();
	else
	{
		while (argv[index])
		{
			message += argv[index];
			index++;
		}
		std::cout << megaphone.make_louder(message) << std::endl;
	}
	return (EXIT_SUCCESS);
}