# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkumar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/04 21:05:35 by pkumar            #+#    #+#              #
#    Updated: 2018/05/04 21:05:36 by pkumar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

SRC = *.c

OUT = *.o

all: $(NAME)

.PHONY: clean fclean re

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I libft.h
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all

