NAME = Fixed
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = main.o \
		Fixed.o
TESTOBJECTS = test_main.o \
		Fixed.o

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

test : $(TESTOBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(TESTOBJECTS)

.PHONY : all clean fclean re test
