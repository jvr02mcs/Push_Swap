GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
NC = \033[0m

SRC = main.c\
	ft_atol.c\
	ft_error.c\
	push_swap.c\
	free_array.c\
	is_not_int.c\
	ft_is_space.c\
	invalid_args.c\
	args_not_digit.c\
	movements/swap.c\
	movements/push.c\
	movements/rotate.c\
	movements/rotate_two.c\
	movements/rev_rotate.c\
	movements/rev_rotate_two.c\
	stack_utils/stcklen.c\
	stack_utils/new_node.c\
	stack_utils/find_min.c\
	stack_utils/get_cost.c\
	stack_utils/fill_stack.c\
	stack_utils/free_stack.c\
	stack_utils/put_b_in_a.c\
	stack_utils/find_better.c\
	stack_utils/get_the_best.c\
	stack_utils/get_position.c\
	stack_utils/stack_is_empty.c\
	stack_utils/rotate_till_top.c\
	stack_utils/init_full_stack.c\
	stack_utils/smallest_bigger.c\
	stack_utils/stack_is_ordered.c\
	
MAKEFLAGS = --no-print-directory
OBJS = $(SRC:.c=.o)
LIB = libft/libft.a
HEADERS = push_swap.h 
NAME = push_swap
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	@echo "$(GREEN)push_swap compiled!$(NC)"

%.o: %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<

$(NAME):
	@echo "$(YELLOW)"
	@make -C ./libft
	@make bonus -C ./libft
	@echo "Compiling push_swap ..."
	@echo "$(NC)"
	@gcc $(FLAGS) -o $(NAME) $(SRC) $(LIB) $(MLXFLAFS)
clean:
	
	@echo "$(RED)"
	rm -f $(OBJS)
	@make clean -C libft
	@echo "$(GREEN)push_swap cleaned!$(NC)"

fclean: clean
	@echo "$(RED)"
	rm -f $(NAME)
	@make fclean -C libft
	@echo "$(GREEN)fclean done!$(NC)"
	
re: fclean all