# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/19 14:55:12 by edraugr-          #+#    #+#              #
#    Updated: 2018/12/19 16:15:03 by edraugr-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = liblowlvlddd.a
FLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
INCLUDES = -I ./ -I ../libft -I ../minilibx
BINS := $(patsubst %.c,%.o,$(SRC))

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(INCLUDES) -c $(SRC)
	ar rc $(NAME) $(BINS)
	ranlib $(NAME)

clean:
	rm -f $(BINS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
