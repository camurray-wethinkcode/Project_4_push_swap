NAME_CH	= checker
NAME_PS = push_swap
CC		= gcc
LIBFT_DIRECTORY = ./libft
HDR_PATH = includes
SRC_DIR = ./srcs/
LIBRARIES = -lft -Llibft
LIBFT	= ./libft/*
INCLUDES = -I./libft/includes

# ----- Colors -----
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
CYAN:="\033[1;35m"
PURPLE:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"
# ==================

CH_SRCS		= $(SRC_DIR)checker/checker.c $(SRC_DIR)checker/rot_operations.c $(SRC_DIR)checker/shift_operations.c
CH_SRCS		+= $(SRC_DIR)checker/validator.c $(SRC_DIR)checker/check_op.c $(SRC_DIR)checker/stack_handler.c
CH_SRCS		+= $(SRC_DIR)checker/stack_functions.c $(SRC_DIR)checker/int_validator.c
CH_SRCS		+= $(SRC_DIR)checker/visualizer.c $(SRC_DIR)checker/read_input.c

PS_SRCS		= $(SRC_DIR)push_swap/single_operations.c $(SRC_DIR)push_swap/algorithm.c $(SRC_DIR)push_swap/controller.c
PS_SRCS		+= $(SRC_DIR)push_swap/double_operations.c $(SRC_DIR)push_swap/extra.c $(SRC_DIR)push_swap/extra2.c
PS_SRCS		+= $(SRC_DIR)push_swap/push_swap.c $(SRC_DIR)push_swap/values.c $(SRC_DIR)push_swap/stack_ops.c $(SRC_DIR)push_swap/validator.c
PS_SRCS		+= $(SRC_DIR)push_swap/string_validator.c

CH_OBJS		= $(SRCS:.c=.o)
FLAGS 		= -Wall -Werror -Wextra

all:		$(NAME_CH) $(NAME_PS)

$(NAME_CH): $(CH_SRCS) $(LIBFT)
		cd ./libft && make
		echo $(GREEN)Built libft.$(EOC);
		$(CC) $(FLAGS) $(INCLUDES) $(CH_SRCS) $(LIBRARIES) -o $(NAME_CH)
		echo $(GREEN)"Compiled checker." $(EOC)

$(NAME_PS): $(PS_SRCS) $(LIBFT)
		$(CC) $(FLAGS) $(INCLUDES) $(PS_SRCS) $(LIBRARIES) -o $(NAME_PS)
		echo $(GREEN)"Compiled push_swap." $(EOC)

clean:
		/bin/rm -f $(CH_OBJS)
		cd ./libft && make clean

fclean: clean
		/bin/rm -f $(NAME_PS)
		/bin/rm -f $(NAME_CH)
		cd ./libft && make fclean

re: fclean all
