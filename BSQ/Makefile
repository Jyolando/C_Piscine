# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/30 18:08:27 by jyolando          #+#    #+#              #
#    Updated: 2021/06/30 18:16:01 by jyolando         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CCFLAGS = -c -Wall -Werror -Wextra
SOURCES = src/ft_check_map.c src/ft_error.c src/ft_find_max_square.c src/ft_find_min.c \
			src/ft_free_mem.c src/ft_get_config.c src/ft_get_map.c src/ft_putstr.c\
			src/ft_read_empty.c src/ft_read_map.c src/ft_read_sizes.c src/ft_write_square.c\
			src/main.c
OBJ = ft_check_map.o ft_error.o ft_find_max_square.o ft_find_min.o ft_free_mem.o ft_get_config.o\
		ft_get_map.o ft_putstr.o ft_read_empty.o ft_read_map.o ft_read_sizes.o ft_write_square.o\
		main.o

all: $(NAME)

$(NAME):
		$(CC) $(CCFLAGS) -I header $(SOURCES)
		$(CC) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(OBJ)
		rm -f $(NAME)
