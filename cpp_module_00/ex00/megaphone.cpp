/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:32 by kyukim            #+#    #+#             */
/*   Updated: 2022/03/31 15:31:48 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using namespace std;	//이거 쓰면 안 됨.

/*
	표준입력을 받을 때, cpp 스타일을 쓰라고 하는 말이
	int main(char *argv[]) 대신 std::cin 을 쓰라는 듯?
*/

class megaphone
{
	private:
		int				index;
		string			noise;
	public:
		megaphone()
		{
			set();
		}
		void	set();
		void	basic_noise();
		string	make_louder(string message);
};

void	megaphone::set()
{
	index = 0;
	noise = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

void	megaphone::basic_noise()
{
	cout << noise << endl;
}

string megaphone::make_louder(string message)
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
	string		message;

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
		cout << megaphone.make_louder(message) << endl;
	}
	return (EXIT_SUCCESS);
}