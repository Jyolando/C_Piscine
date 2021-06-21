# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/21 16:01:42 by jyolando          #+#    #+#              #
#    Updated: 2021/06/21 18:03:56 by jyolando         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_display_file.c srcs/ft_display_buff.c srcs/ft_putstr.c
OBJS = ft_display_file.o ft_display_buff.o ft_putstr.o
INCL = -I includes
NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra -o

all:
		make ${NAME}

${NAME}:
		${CC} -c ${SRCS} ${INCL}
		${CC} ${CFLAGS} ${NAME} ${OBJS}

clean:
		rm -rf *.o

fclean:
		rm -f ${NAME} *.o
