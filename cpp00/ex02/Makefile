NAME	= account

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= tests.cpp Account.cpp
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