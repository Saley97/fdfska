# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/18 20:15:23 by edraugr-          #+#    #+#              #
#    Updated: 2018/12/20 03:51:28 by edraugr-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fdf

LDIR	= ./minilibx
LNAME	= ./minilibx/libmlx.a
L2DIR	= ./libft
L2NAME	= ./libft/libft.a
L3NAME	= ./lowlvlddd/liblowlvlddd.a
L3DIR	= ./lowlvlddd

SRC		= $(wildcard *.c)
OBJ		:= $(patsubst %.c,%.o,$(SRC))
MAIN	= main.c

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(LNAME) $(OBJ)
		$(CC) $(OBJ) -I. -I$(LDIR) -I$(L2DIR) -I$(L3DIR) -L$(LDIR) -L$(L2DIR) -L$(L3DIR) -lmlx -lft -llowlvlddd -framework OpenGL -framework AppKit -o $(NAME)

$(LNAME):
		$(MAKE) -C $(LDIR) all
		$(MAKE) -C $(L2DIR) all
		$(MAKE) -C $(L3DIR) all

%.o:%.c
		$(CC)  -I. -I$(LDIR) -I$(L2DIR) -I$(L3DIR) -o $@ -c $<

clean:
		$(MAKE) -C $(LDIR) clean
		$(MAKE) -C $(L2DIR) clean
		$(MAKE) -C $(L2DIR) clean
		rm -f $(OBJ)

fclean: clean
		rm -f $(LNAME)
		rm -rf $(L2NAME)
		rm -rf $(L3NAME)
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
