NAME = Poly
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./Dog.cpp ./Cat.cpp ./Animal.cpp ./WrongAnimal.cpp ./WrongCat.cpp ./main.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp
	c++  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all