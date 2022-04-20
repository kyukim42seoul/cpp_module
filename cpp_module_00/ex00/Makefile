NAME = megaphone
CXX = c++
CXXFLAGS = -W -Wall -Wextra -Werror -std=c++98 -pedantic
OBJECTS = megaphone.o

all : $(NAME) clean

$(NAME) : $(OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

test :
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY : all clean fclean re test
