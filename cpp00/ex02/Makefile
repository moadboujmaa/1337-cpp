NAME	= account

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= tests.cpp Account.cpp
HEADERS	= Account.hpp
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