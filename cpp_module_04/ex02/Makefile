NAME = abstractAnimal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = main.o \
		Animal.o \
		Cat.o \
		Dog.o \
		Brain.o
TEST_OBJECT = test_main.o \
			Animal.o

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

test : $(TEST_OBJECT)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(TEST_OBJECT)

.PHONY : all clean fclean re
