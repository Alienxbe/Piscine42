SRCS	=		main.c operations.c ft_str.c

OBJS	=		${SRCS:.c=.o}

NAME	=		do-op

FLAGS	=		-Wall -Wextra -Werror

all:			${NAME}

.c.o:
				gcc ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				gcc ${FLAGS} $^ -o $@

clean:
				rm -f ${OBJS}

fclean:			clean
				rm -f ${NAME}

re:				fclean all

.PHONY:			all clean fclean re