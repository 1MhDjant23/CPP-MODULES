#--------- COLORS ---------#
RED = \033[0;31m
BBLUE = \033[1;34m
BRED = \033[1;31m
BGRN = \033[1;32m
BYEL = \033[1;33m
BEND = \033[0m
#--------------------------#

NAME = array-template

SRC = $(shell find . -name "*.cpp")

HDR = $(shell find . -name "*.hpp")

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(BYEL)Executable $(NAME) created!$(BEND)"


%.o: %.cpp	$(HDR) Array.tpp
	@echo "$(BGRN)Compiling $<...$(BEND)"
	@$(CC) $(FLAGS) -c  $< -o $@

clean:
	@if find . -name "*.o" -print -quit | grep -q .; then \
		rm -f $(OBJ); \
		echo "$(RED)Object files removed!$(BEND)"; \
	else \
		echo "$(BBLUE)	No object files to clean!$(BEND)"; \
	fi

fclean: clean
	@if find . -name "$(NAME)" -print -quit | grep -q .; then \
		rm -f $(NAME); \
		echo "$(BRED)Executable file removed!$(BEND)"; \
	else \
		echo "$(BYEL)	No executable file to clean!$(BEND)"; \
	fi

re: fclean all

.PHONY: all clean fclean re
