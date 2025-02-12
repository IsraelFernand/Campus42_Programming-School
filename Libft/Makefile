NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


-----------------------------------------------------------------------------------
/* Makefile se utiliza para automatizar el proceso de compilacion,
contiene instrucciones para el programa make, que se encarga de las
acciones definidas en el archivo. Puede compilar los archivos, 
generar los ejecutables y limpiar archivos intermedios */
-----------------------------------------------------------------------------------

NAME = libft.a                  /* Se utiliza comúnmente para definir el nombre del archivo objetivo que se va a generar. */
CC = cc                         /* El propósito de usar esta variable es permitir flexibilidad al cambiar de compilador fácilmente, si fuera necesario. */
SRC                             /* La variable SRC se utiliza para definir los archivos fuente (.c) del proyecto. */
OBJ = $(SRC:.c=.o)              /* Define la variable OBJ, que contiene la lista de archivos objeto (.o) que se generarán a partir de los archivos fuente (.c) definidos en la variable SRC. */
all: $(NAME)                    /* Es una forma de decirle al Makefile que su objetivo principal es construir el archivo o programa representado por la variable NAME. Esto organiza el proceso de construcción y facilita su uso. */
$(NAME): $(OBJ)                 /* Establece que $(NAME) depende de los archivos objeto $(OBJ).
 ar rcs $(NAME) $(OBJ)          /* Empaqueta esos objetos en una librería estática.
%.o: %.c libft.h                /* Esta regla facilita la compilación de archivos fuente a archivos objeto
 $(CC) $(CFLAGS) -c $< -o $@    /* y asegura que el proyecto se recompile automáticamente si alguno de los archivos fuente o encabezados cambia.
clean:
	rm -f $(OBJ)            /* Se encarga de eliminar los archivos objeto (.o) generados durante la compilación.
fclean: clean
	rm -f $(NAME)           /* Es útil para realizar una limpieza total del proyecto. Después de ejecutar esta regla, el directorio del proyecto quedará como estaba antes de ejecutar cualquier comando de compilación.
re: fclean all                  /* Se utiliza para realizar una reconstrucción completa del proyecto.
.PHONY: all clean fclean re     /* es una práctica recomendada en los Makefiles para evitar problemas con nombres de archivos y asegurar que los objetivos clave del proyecto funcionen correctamente.

-----------------------------------------------------------------------------------
