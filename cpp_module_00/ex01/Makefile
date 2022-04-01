# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyukim <kyukim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 13:45:28 by kyukim            #+#    #+#              #
#    Updated: 2022/03/31 16:12:23 by kyukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror
OBJECTS = main.o \
			phonebook.o \
			action.o \
			listener.o \
			contact.o

all : $(NAME) clean

$(NAME) : $(OBJECTS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
