/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:33:50 by kyukim            #+#    #+#             */
/*   Updated: 2022/04/01 16:10:37 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	action::hub(char *cmd)
{
	if (std::strcmp(cmd, "ADD") == 0)
	{
		guide(cmd);
	}
	else if (std::strcmp(cmd, "SEARCH") == 0)
	{
		std::cout << "Start searching..." << std::endl;
	}
	else if (std::strcmp(cmd, "EXIT") == 0)
	{
		std::cout << "It's done!" << std::endl;
		exit(EXIT_SUCCESS);
	}
	else
		guide(cmd);
}

void	action::guide(char *cmd)
{
	static int	count;

	if (std::strcmp(cmd, "ADD") == 0 && count == 0)
	{
		std::cout << "Please input first name" << std::endl;
		count++;
	}
	else if (std::strcmp(cmd, "ADD") == 0 && count == 1)
	{
		std::cout << "Please input last name" << std::endl;
		count++;
	}
	else if (std::strcmp(cmd, "ADD") == 0 && count == 2)
	{
		std::cout << "Please input nick name" << std::endl;
		count++;
	}
	else if (std::strcmp(cmd, "ADD") == 0 && count == 3)
	{
		std::cout << "Please input phone number" << std::endl;
		count++;
	}
	else if (std::strcmp(cmd, "ADD") == 0 && count == 4)
	{
		std::cout << "Please input secret" << std::endl;
		count = 0;
	}
	else if (std::strcmp(cmd, "SEARCH") == 0)
	{
		std::cout << "Please input index" << std::endl;
	}
}