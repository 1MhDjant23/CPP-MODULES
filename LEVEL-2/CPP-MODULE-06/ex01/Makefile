NAME = serialization

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(shell find . -type f -name '*.cpp')

OBJS = $(SRC:.cpp=.o)

HDRS = $(shell find . -type f -name '*.hpp')

all:	$(NAME)

%.o: %.cpp	$(HDRS)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all