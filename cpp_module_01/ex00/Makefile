NAME = Zombie
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp ./newZombie.cpp ./randomChump.cpp ./Zombie.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all