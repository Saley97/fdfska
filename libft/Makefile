# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 16:56:16 by edraugr-          #+#    #+#              #
#    Updated: 2018/12/20 00:03:27 by edraugr-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
INCLUDES = -I ./
BINS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(INCLUDES) -c $(SRC)
	ar rc $(NAME) $(BINS)
	ranlib $(NAME)

clean:
	rm -rf $(BINS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
