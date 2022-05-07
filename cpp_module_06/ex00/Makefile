NAME = Conversion
CXX = c++
CXXFLAGS = -W -Wall -Wextra -Werror -std=c++98 -pedantic
OBJECTS = main.o \
		Conversion.o \

all : $(NAME) clean

$(NAME) : $(OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : 
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re
