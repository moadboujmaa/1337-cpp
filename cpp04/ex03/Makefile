NAME	= brain

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp AMateria.cpp Charcter.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp AMateria.hpp Charcter.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharcter.hpp IMateriaSource.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all