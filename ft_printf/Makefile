# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kruiz-cu <kruiz-cu@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 19:17:43 by kruiz-cu          #+#    #+#              #
#    Updated: 2025/01/23 20:06:27 by kruiz-cu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = ft_printf.h 
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
OBJ = $(SRC:.c=.o)
SRC =	ft_printf.c	\
		ft_basics.c	\
		ft_hexadecimals.c	\
		ft_pointers.c	\

all: $(NAME)

$(NAME): $(OBJ) Makefile
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
