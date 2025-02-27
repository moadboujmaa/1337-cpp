NAME	= cast

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 

SRC		= main.cpp ScalarConverter.cpp TypeCheck.cpp Convert.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp ScalarConverter.hpp TypeCheck.cpp Convert.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all