NAME	= phonebook

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=98

SRC		= PhoneBook.cpp Contact.cpp main.cpp
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