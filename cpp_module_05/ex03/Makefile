NAME = Intern
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJECTS = main.o \
		Bureaucrat.o \
		Form.o \
		ShrubberyCreationForm.o \
		RobotomyRequestForm.o \
		PresidentialPardonForm.o \
		Intern.o \

all : $(NAME) clean

$(NAME) : $(OBJECTS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
