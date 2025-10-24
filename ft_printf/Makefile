# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpanfero <kpanfero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 12:08:15 by kpanfero          #+#    #+#              #
#    Updated: 2025/10/24 10:59:21 by kpanfero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c		\
	  manage_format.c	\
	  ft_putchar.c		\
	  ft_putstr.c		\
	  ft_putnbr.c		\
	  ft_putunbr.c		\
	  ft_puthex.c		\
	  ft_putptr.c		\



OBJ = $(SRC:.c=.o)
B_OBJ = $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

TEST = test_printf

test: $(NAME) main.o
	$(CC) $(CFLAGS) main.o -L. -lftprintf -o $(TEST)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

clean_test:
	rm -f main.o $(TEST)