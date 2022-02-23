NAME = do-op
SRCS = ft_atoi.c ft_cal.c ft_doop.c ft_putchar.c ft_putnbr.c ft_putstr.c main.c
OBJS = ${SRCS:.c=.o}
HEADER_SRC = includes/
FLAG = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	gcc $(FLAG) -o ${NAME} ${OBJS}
%.o : %.c 
	gcc $(FLAG) -I $(HEADER_SRC) -c $< -o $@
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY:	all clean fclean re
