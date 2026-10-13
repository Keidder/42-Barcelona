NAME = libft.a
INCLUDE = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC: .c=.o)
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

all: $(NAME)

$(NAME): $(OBJ) Makefile
	ar rcs $(NAME) $(OBJ)

%.0: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
