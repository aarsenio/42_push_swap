SRCS	= main.c \
		  utils/list_config.c \
		  utils/swap.c \
		  utils/push.c \
		  utils/rotate.c \
		  utils/reverse_rotate.c \
		  utils/algorithm.c \
		  utils/exit_program.c \
		  utils/parsing.c

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror #-g -fsanitize=address

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re