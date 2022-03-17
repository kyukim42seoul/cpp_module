/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:32 by kyukim            #+#    #+#             */
/*   Updated: 2022/03/17 15:56:30 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using namespace std;

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