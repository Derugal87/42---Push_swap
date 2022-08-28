ifndef VERPOSE
.SILENT:
endif

NAME = push_swap
CC = gcc
RM = rm -f
CFLAGS	= -Wall -Wextra -Werror
C_FILES = push_swap.c ft_atoi_ps.c sort/sort_more.c sort/sort_less_23.c sort/move_to_top.c sort/sort_5.c sort/sort_4.c sort/sort_3.c sort/sort_2.c sort/check_sort.c sort/count_move.c list_utils/find_limit_node.c list_utils/print_list.c list_utils/pre_last_node.c list_utils/last_node.c list_utils/del_node.c list_utils/list_size.c parser.c list_utils/free_node.c sort/list_sort.c sort/sort_int_arr.c list_utils/push.c list_utils/find_node.c operations/p.c operations/r.c operations/rr.c operations/s.c 
O_FILES = $(C_FILES:.c=.o)
LIB = libft/libft.a
LIBFT = cd libft && make bonus

$(NAME) : $(O_FILES)
		  $(LIBFT)
	      $(CC) $(CFLAGS) -o push_swap $(O_FILES) $(LIB)

clean:
	$(RM) $(O_FILES)

fclean: clean
	$(RM) $(NAME)

all: $(NAME)

re: fclean all

.PHONY:	all clean fclean re