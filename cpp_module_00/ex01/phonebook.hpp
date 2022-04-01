/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:54:07 by kyukim            #+#    #+#             */
/*   Updated: 2022/03/31 16:41:07 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

# include <iostream>
# include <fstream>
# include <cstring>
# include <cctype>

using namespace	std;		//이거 쓰면 안 됨

/*
	이거 enum 으로 바꾸는거 고려해보자.
*/
#define FIRST_NAME 2;
#define LAST_NAME 3;
#define NICKNAME 4;
#define PHONE_NUMBER 5;
#define SECRET 6;

class contact
{
	private:
		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*phone_number;
		char	*darkest_secret;
	public:
		contact();
		void	show_data(int index);
		char	*get_first_name();
		char	*get_last_name();
		char	*get_nick_name();
		char	*get_phone_number();
		char	*get_darkest_secret();
};

class phonebook
{
	private:
		contact	contact_list[9];
	public:
		phonebook(/* args */);
		~phonebook();
};

class	action
{
	public:
		action()
		{
			
		};
		void	hub(char *cmd);
		void	guide(char *cmd);
		//	void	write();
};

class	listener
{
	private:
		action		act;
		phonebook	book;
		char		cmd[7];
	public:
		listener()
		{

		};
		void	listen();
};

#endif