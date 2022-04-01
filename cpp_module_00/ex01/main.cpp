/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:07:13 by kyukim            #+#    #+#             */
/*   Updated: 2022/03/31 16:09:19 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*
class main
{
	main()
	{
		char	buf[128];
	};
	main(listener name)
	{

	};
};*/

int	main()
{
	listener	a;

	a.listen();
/*	char	buf[128];

	while (true)
	{
		cin.getline(buf, 128);
		if (strcmp(buf, "exit") == 0)
			exit(EXIT_SUCCESS); 
		if (cin.fail())
		{
			cout << "Invalid" << endl;
			break ;
		}
		else
			cout << buf << endl;
		cin.clear();
	};*/
	return (EXIT_SUCCESS);
}