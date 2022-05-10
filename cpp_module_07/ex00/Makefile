NAME = TempletePractice
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = main.o

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re test
