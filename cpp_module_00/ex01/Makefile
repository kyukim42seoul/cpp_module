NAME = PhoneBook
CXX = c++
CXXFLAGS = -W -Wall -Wextra -Werror -std=c++98 -pedantic
OBJECTS = main.o \
	PhoneBook.o \
	Contact.o \
	Util.o \

all : $(NAME) clean

$(NAME) : $(OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
