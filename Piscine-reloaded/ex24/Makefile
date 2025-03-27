# Nombre de la biblioteca
NAME = libft.a

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directorios de las fuentes y las cabeceras
SRCDIR = srcs
INCDIR = includes

# Archivos fuente (solo los obligatorios)
SRC = $(SRCDIR)/ft_putchar.c \
      $(SRCDIR)/ft_putstr.c \
      $(SRCDIR)/ft_strcmp.c \
      $(SRCDIR)/ft_strlen.c \
      $(SRCDIR)/ft_swap.c

# Archivos objeto (cambia la extensión de .c a .o)
OBJ = $(SRC:.c=.o)

# Regla principal: compilar la biblioteca
all: $(NAME)

# Crear la biblioteca a partir de los archivos objeto
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Regla para compilar archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

# Limpiar archivos objeto
clean:
	rm -f $(OBJ)

# Limpiar archivos objeto y la biblioteca
fclean: clean
	rm -f $(NAME)

# Recompilar desde cero
re: fclean all

# Declarar que clean, fclean y re no son archivos
.PHONY: all clean fclean re

