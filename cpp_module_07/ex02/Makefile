NAME = Array
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = main.o

TEST_OBJECTS = test_main.o

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

test : $(TEST_OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(TEST_OBJECTS)

.PHONY : all clean fclean re
