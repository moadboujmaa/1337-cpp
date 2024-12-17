NAME	= brain

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 # -fsanitize=address

SRC		= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp Saved.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp ICharacter.hpp IMateriaSource.hpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp Saved.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all