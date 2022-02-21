//폴더랑 파일 경로
SRCS		= ft/ft_atol.c 
//object 파일 목록
OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})
//만들 파일의 이름
NAME		= rush-02
//컴파일 옵션
CFLAGS		= -Wall -Wextra -Werror
// 모든것
all:		${NAME}

${NAME}:	${OBJS}
			gcc ${CFLAGS} $^ -o $@

.c.o:
			gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

clean:
			rm -f ${OBJS} 

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re



$< : 첫 번째 전제 조건의 파일 이름
$@ : 목표 이름
$* : 목표 이름에서 확장자가 없는 이름
$< : 첫 번째 전제 조건의 파일 이름
$? : 목표 파일 보다 더 최근에 갱신된 파일 이름
$^: 현재 Target이 의존하는 대상들의 전체 목록
$?: 현재 Target이 의존하는 대상들 중 변경된 것들의 목록
$% : 대상의 이름 (해당 규칙 대상이 아카이브 인 경우)
$(addprefix 접두어, 문자열)
$(addsuffix 접미사, 문자열)
여기서 -c 옵션은 object 파일을 생성하는 옵션이고,
-o 옵션은 생성 될 파일 이름을 지정하는 옵션입니다.

NAME = ft_display_file
GCC = gcc -Wall -Wextra -Werror
SRCS = main.c error_handler.c
OBJS = $(SRCS:.c=.o)
%.o : %.c
	$(GCC) -c $< -o $@
$(NAME) : $(OBJS)
	$(GCC) -o $(NAME) $(OBJS)
.PHONY: all clean fclean re
all : $(NAME)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all