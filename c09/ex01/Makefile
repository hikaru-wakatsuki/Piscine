NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(DIC)/ft_putchar.c \
		$(DIC)/ft_swap.c \
		$(DIC)/ft_putstr.c \
	   $(DIC)/ft_strlen.c \
	   $(DIC)/ft_strcmp.c \

DIC = srcs

INCDIC = includes

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	$(MAKE) clean
	rm -f $(NAME)

re:
	fclean all

.PHONY:
	all clean fclean re
