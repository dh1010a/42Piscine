NAME = libft.a
srcs = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o
HEADER_SRC = includes/
FLAG = -Wall -Wextra -Werror


$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
%.o : %.c 
	gcc $(FLAG) -I $(HEADER_SRC) -c $< -o $@
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY:	all clean fclean re
