NAME	= violence

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS	= Weapon.hpp HumanA.hpp HumanB.hpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all