NAME = Animals
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = main.o \
		Animal.o \
		Cat.o \
		Dog.o \
		WrongAnimal.o \
		WrongCat.o \

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
