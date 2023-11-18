
SRCS_DIR = srcs
INCLUDES_DIR = includes

SRCS = $(addprefix $(SRCS_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(SRCS:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror


NAME = libft.a


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
