NAME = rush-02

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_split.c \
		assign_and_validate.c \
	   dict_split.c \
	   error_handling.c \
	   for_str_num.c \
	   ft_count_new_strlen.c \
	   ft_malloc_assign_zero.c \
	   ft_number_is_valid.c \
	   ft_putstr.c \
	   ft_strcmp.c \
	   ft_strlen.c \
	   is_valid_free.c \
	   read_dict.c \
	   match.c \
	   search_index_key_to_word.c \
	   str_num_to_word.c \
	   main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	$(MAKE) clean
	rm -f $(NAME)

re:
	fclean all

.PHONY:
	all clean fclean re
