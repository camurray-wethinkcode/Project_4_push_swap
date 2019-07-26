NAME		= libft.a
CC			= gcc
INCLUDES 	= -I./includes

# ----- Colors -----
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
CYAN:="\033[1;35m"
PURPLE:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"
# ==================

# Part 1
SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_memccpy.c
SRCS		+= ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c
SRCS		+= ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
# Part 2
SRCS		+= ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c
SRCS		+= ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c
SRCS		+= ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# Bonus
SRCS		+= ft_lstnew.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstdel.c ft_abs.c ft_lstlen.c
# Extra
SRCS		+= ft_iswhitespace.c ft_wordcount.c ft_sort_array.c ft_strswap.c ft_insert_node.c ft_free_list.c ft_isupper.c
SRCS		+= ft_intlen.c ft_frequency.c ft_putendl_col_fd.c ft_putchar_col_fd.c ft_putstr_col_fd.c
SRCS		+= ft_putnbr_col_fd.c ft_int_overflows.c ft_copy_array.c ft_isnum.c ft_freearray.c string_input.c
# get_next_line
SRCS		+= ft_copyuntil.c get_next_line.c

OBJS		= $(SRCS:.c=.o)
FLAGS =		-Wall -Werror -Wextra -c -Iincludes

all:		$(NAME) $(SRCS)

$(NAME): $(SRCS)
		gcc $(FLAGS) $(INCLUDES) $(SRCS)
		echo $(GREEN)Compiled source files.$(EOC)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
		echo $(GREEN)Built library.$(EOC)

clean:
		/bin/rm -f $(OBJS)
		echo $(GREEN)Cleaned objects.$(EOC)

fclean: clean
		/bin/rm -f $(NAME)
		echo $(GREEN)Cleaned library.$(EOC)

re: fclean all
