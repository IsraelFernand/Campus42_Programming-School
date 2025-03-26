# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 00:09:34 by israelfe          #+#    #+#              #
#    Updated: 2025/03/25 19:55:04 by israelfe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_strlen.c ft_putnbr.c \
	  ft_hexa_mayus.c ft_hexa_min.c ft_num_nosign.c ft_punt_hexa.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all