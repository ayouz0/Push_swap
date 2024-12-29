NAME = push_swap

RESET_COLOR = \033[0m
GREEN = \033[1;32m
YELLOW = \033[1;33m
RED = \033[1;31m
BLUE = \033[1;34m
CYAN = \033[1;36m
MAGENTA = \033[1;35m

CFLAGS = -Wall -Werror -Wextra

SRC = $(wildcard *.c)

OBJ = ${SRC:.c=.o}

%.o:%.c push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(MAGENTA)──────────────────────────────────────────────$(RESET_COLOR)"
	@echo "$(GREEN)🎉✨ Build succeeded! $(RESET_COLOR)"
	@echo "$(CYAN)  Your program '$(NAME)' is ready to run.$(RESET_COLOR)"
	@echo "$(MAGENTA)──────────────────────────────────────────────$(RESET_COLOR)"
	@echo "$(YELLOW)To execute, run: ./$(NAME)$(RESET_COLOR)"

all : $(NAME)

clean : 
	@echo "$(RED)🧹 Cleaning up build files...$(RESET_COLOR)"
	rm -f $(OBJ)
	@echo "$(GREEN)✨ Clean complete.$(RESET_COLOR)"
fclean : clean
	@rm -f $(NAME)