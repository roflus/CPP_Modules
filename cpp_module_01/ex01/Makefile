NAME = zombieHorde
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp ./Zombie.cpp ./zombieHorde.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all