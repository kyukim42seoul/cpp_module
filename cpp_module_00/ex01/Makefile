NAME = PhoneBook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = main.o \
	PhoneBook.o \
	Contact.o \
	Util.o \

all : $(NAME) clean

$(NAME) : $(OBJECTS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re