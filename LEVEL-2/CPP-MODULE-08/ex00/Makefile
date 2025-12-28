#--------# COLOR CODES #--------#
RESET = \033[0m
RED = \033[31m
UNDERLINE = \033[4m
BOLD = \033[1m
BRED = \033[1;31m
BGREEN = \033[32m
BYELLOW = \033[33m
BBLUE = \033[34m

#----------------##----------------#

NAME = easy-find

SRC = $(shell find . -name "*.cpp")

OBJ = $(SRC:.cpp=.o)

HDR = $(shell find . -name "*.hpp")

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BOLD)$(BYELLOW)Compiling $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(BOLD)$(BGREEN)$(NAME) compiled successfully!$(RESET)"

%.o: %.cpp $(HDR) easyfind.tpp
	@echo "$(BOLD)$(BBLUE)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	@if find . -name "*.o" -type f -print -quit | grep -q .; then \
		echo "$(BOLD)$(RED)Cleaning object files...$(RESET)"; \
		rm -f $(OBJ); \
	else \
		echo "$(BOLD)$(UNDERLINE)	No object files to clean.$(RESET)"; \
	fi

fclean: clean
	@if find . -name "$(NAME)" -type f -print -quit | grep -q .; then \
		echo "$(BOLD)$(RED)Cleaning executable file...$(RESET)"; \
		rm -f $(NAME); \
	else \
		echo "$(BOLD)$(UNDERLINE)	No executable to clean.$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re
.signature: Makefile
	@echo "$(BOLD)$(UNDERLINE)Makefile created by [Your Name]$(RESET)"
	@echo "$(BOLD)$(UNDERLINE)Date: $(shell date +'%Y-%m-%d %H:%M:%S')$(RESET)"
	@echo "$(BOLD)$(UNDERLINE)Project: Easy Find$(RESET)"
	@echo "$(BOLD)$(UNDERLINE)Version: 1.0$(RESET)"