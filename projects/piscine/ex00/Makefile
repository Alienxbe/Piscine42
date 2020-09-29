# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/27 16:03:39 by ybrutout          #+#    #+#              #
#    Updated: 2020/09/27 23:09:13 by rcammaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	errors.c \
			   	ft_spell_number.c \
			   	ft_strjoin.c \
				number_to_text.c \
				formating.c \
				ft_split.c \
				ft_strlen.c \
				read_file.c \
				free_memory.c \
				ft_str_is.c \
				load_dictionary.c \
				ft_atoin.c \
				ft_strcat.c \
				main.c \
				ft_putstr.c \
				ft_strcpy.c \
				nbr_to_text_functions.c \

OBJS		= 	${SRCS:.c=.o}

NAME		= 	rush-02

FLAGS		= 	-Wall -Wextra -Werror

CC			=	gcc

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} $^ -o $@

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
