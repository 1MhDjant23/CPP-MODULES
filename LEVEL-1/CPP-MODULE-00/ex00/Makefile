#---------- COLORS ----------
BRED = \033[1;31m
BGRN = \033[1;32m
BYEL = \033[1;33m
RED = \033[0;31m
BBLUE = \033[1;34m
BEND = \033[0m

#----------------------------

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp 
	@echo "$(BGRN)Compiling $<...$(BEND)"
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): .signature $(OBJ)
	@echo "$(BYEL)Linking objects to create $(NAME)...$(BEND)"
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@sleep 0.8
	@echo "\n$(BGRN)- Compilation complete! -$(BEND)"

clean:
	@if find . -name "*.o" -print -quit | grep -q .; then \
		echo "$(RED)Cleaning up object files...$(BEND)"; \
		rm -f $(OBJ); \
		sleep 1; \
	else \
		echo "\n	$(BBLUE)No object files to clean up!$(BEND)\n"; \
	fi

fclean: clean
	@if find . -name "$(NAME)" -print -quit | grep -q .; then \
		echo "$(BRED)Removing executable file $(NAME)...$(BEND)"; \
		rm -f $(NAME); \
		sleep 0.7; \
	else \
		echo "\n	$(BYEL)No executable file to remove!$(BEND)\n"; \
	fi

.signature: 
	@echo "\n	$(BEND)Developed by $(BGRN)mait-taj$(BEND) - $(BBLUE)Student at 1337MED$(BEND)\n"

re: fclean all

.PHONY: all clean fclean re .signature
