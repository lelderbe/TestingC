# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 14:39:19 by lelderbe          #+#    #+#              #
#    Updated: 2020/11/12 12:45:09 by lelderbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.c

OBJS		= ${SRCS:.c=.o}

NAME		= a.out

CC			= gcc

RM			= rm -f

CFLAGS		=

%.o:		%.c
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
