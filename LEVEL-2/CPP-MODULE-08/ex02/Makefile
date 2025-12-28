#-------# Colors #-------#
BRED = \033[1;31m
BGRN = \033[1;32m
GRN = \033[0;32m
BYEL = \033[1;33m
BBLU = \033[1;34m
BMAJ = \033[1;35m
BTEAL = \033[1;36m
RED = \033[0;31m
RESET = \033[0m

#-------# ------- #-------#

NAME = MutantStack

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(shell find . -name "*.cpp")

OBJ = $(SRC:.cpp=.o)

HEADERS = $(shell find . -name "*.hpp")

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@echo "$(BYEL)Linking object files...$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(BRED)$(BGRN)$(NAME) compiled successfully!$(RESET)"

%.o: %.cpp $(HEADERS) MutantStack.tpp
	@echo "$(GRN)Compiling $<$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@if find . -name "*.o" -type f -print -quit | grep -q .; then \
		echo "$(BMAJ)Cleaning object files...$(RESET)";\
		rm -f $(OBJ);\
		sleep 1; \
	else \
		echo "$(BYEL)	No Object Files to clean$(RESET)"; \
	fi

fclean: clean
	@if find . -name "$(NAME)" -print -quit | grep -q .; then \
		echo "$(BRED)Cleaning executable file...$(RESET)"; \
		rm -f $(NAME); \
		sleep 0.8; \
	else \
		echo "$(BTEAL)	No executable file to remove$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re
