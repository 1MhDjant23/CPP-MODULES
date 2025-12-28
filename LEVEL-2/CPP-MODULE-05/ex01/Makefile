#---------- Colors ----------
BRED = \033[1;31m
BGRY = \033[1;30m
BGRN = \033[1;32m
BYEL = \033[1;33m
BBLU = \033[1;34m
BMAJ = \033[1;35m
BTEA = \033[1;36m
BWHI = \033[1;37m
B = \033[1m
BEND = \033[0m
#---------- ___ ----------
NAME = Bureaucrat

SRCS = $(shell find . -name "*.cpp")

HEADS = $(shell find . -name "*.hpp")

OBJS = $(SRCS:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "$(BGRN)Compilation complete.$(BEND)"

%.o: %.cpp $(HEADS)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(BYEL)Compiling $<$(BEND)"
	@echo "$(BWHI)Object file$(BEND) $(BBLU)$@$(BEND) $(BTEA)created.$(BEND)"

clean:
	@$(RM) $(OBJS)
	@echo "$(BGRY)Object files removed.$(BEND)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BRED)Executable removed.$(BEND)"

re: fclean all
	@echo "$(BGRY)Recompilation complete.$(BEND)"

.PHONY: all clean fclean re
