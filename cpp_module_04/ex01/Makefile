NAME = Poly01
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./Dog.cpp ./Cat.cpp ./Animal.cpp ./Brain.cpp ./main.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	c++ $(FLAGS)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all