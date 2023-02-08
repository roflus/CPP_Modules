NAME = Bureau
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./Bureaucrat.cpp ./AForm.cpp ./PresidentialPardonForm.cpp \
	./RobotomyRequestForm.cpp ./ShrubberyCreationForm.cpp \
	./Intern.cpp ./main.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	c++  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all