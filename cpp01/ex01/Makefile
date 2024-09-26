NAME	= moar_braiinz

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 # -fsanitize=address -g

SRC		= Zombie.cpp main.cpp zombieHorde.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all