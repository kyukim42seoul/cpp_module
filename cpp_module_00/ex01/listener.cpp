/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listener.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:33:22 by kyukim            #+#    #+#             */
/*   Updated: 2022/03/31 16:10:00 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	listener::listen()
{
	while (true)
	{
		std::cin.getline(cmd, 7);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Too Long Command" << std::endl;
			exit(EXIT_FAILURE);
		}
//		if (!validate())
//			std::cout << "Invalid Command" << std::endl;
//		else
		act.hub(cmd);
	}
}