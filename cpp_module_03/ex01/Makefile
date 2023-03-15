NAME = BorderLands01
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./ClapTrap.cpp ./ScavTrap.cpp ./main.cpp

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