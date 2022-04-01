/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:29:11 by kyukim            #+#    #+#             */
/*   Updated: 2022/03/31 16:32:56 by kyukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

void	contact::show_data(int index)
{
	int	index;

	cout << '|' << index << '|';
	cout << get_first_name() << '|';
	cout << get_last_name() << '|';
	cout << get_nick_name() << '|';
}

char	*contact::get_first_name()
{
	return (first_name);
};
char	*contact::get_last_name()
{
	return (last_name);
};
char	*contact::get_nick_name()
{
	return (nickname);
};
char	*contact::get_phone_number()
{
	return (phone_number);
};
char	*contact::get_darkest_secret()
{
	return (darkest_secret);
};
