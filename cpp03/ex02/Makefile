NAME	= FragTrap

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all