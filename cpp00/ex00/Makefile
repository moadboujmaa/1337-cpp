NAME	= megaphone

CC		= c++
CFLAGS	= -Wall -Wextra -Werror --std=98

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o : $.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all