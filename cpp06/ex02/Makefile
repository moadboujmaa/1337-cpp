NAME	= serialize

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 

SRC		= main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all