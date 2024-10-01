NAME	= phonebook

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= PhoneBook.cpp Contact.cpp main.cpp
HEADERS	= PhoneBook.hpp Contact.hpp
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