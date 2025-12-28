NAME = fixed-point

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp bsp.cpp Point.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.c	Fixed.hpp Point.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all