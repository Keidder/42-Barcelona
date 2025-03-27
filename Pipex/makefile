NAME =  pipex
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
OBJ = $(SRC:.c=.o)
SRC = 

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
