# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 16:03:39 by ybrutout          #+#    #+#              #
#    Updated: 2020/09/27 17:38:12 by ybrutout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	errors.c \
				formating.c \
				free_memory.c \
				ft_atoin.c \
				ft_check_input_to_text.c \
				ft_input_to_text.c \
				ft_putstr.c \
				ft_split.c \
				ft_strcat.c \
				ft_strcpy.c \
				ft_strjoin.c \
				ft_strlen.c \
				load_dictionary.c \
				nbr_to_text_fonctions.c \
				number_to_text.c \
				read_file.c \
				read_std_input.c \
				main.c

OBJS		= 	${SRCS:.c=.o}

NAME		= 	rush-02

FLAGS		= 	-Wall -Wextra -Werror

CC			=	gcc

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${FLAGS} $^ -o $@

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re