# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 18:43:25 by jyolando          #+#    #+#              #
#    Updated: 2021/06/22 18:51:11 by jyolando         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = calculate.c srcs/ft_atoi.c srcs/ft_operator.c srcs/ft_putchar.c\
		srcs/ft_putnbr.c srcs/ft_putstr.c
OBJS = calculate.o ft_atoi.o ft_operator.o ft_putchar.o\
		ft_putnbr.o ft_putstr.o
INCL = -I includes
NAME = do-op
CC = gcc
CFLAGS = -Wall -Werror -Wextra -o

all:
		make ${NAME}

${NAME}:
		${CC} -c ${SRCS} ${INCL}
		${CC} ${CFLAGS} ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS}

fclean:
		rm -f ${NAME} ${OBJS}
