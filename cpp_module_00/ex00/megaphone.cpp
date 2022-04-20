/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:32 by kyukim            #+#    #+#             */
/*   Updated: 2022/04/06 14:35:38 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class megaphone
{
	private:
		std::string	noise;
	public:
		megaphone();
		void	basic_noise();
		std::string	make_louder(std::string message);
};

megaphone::megaphone()
{
	noise = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

void	megaphone::basic_noise()
{
	std::cout << noise << std::endl;
}

std::string megaphone::make_louder(std::string message)
{
	for (unsigned int index = 0; index < message.length(); index++)
		message[index] = std::toupper(message[index]);
	return (message);
}

int main(int argc, char *argv[])
{
	int			index;
	megaphone	megaphone;
	std::string	message;

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
