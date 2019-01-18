# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/31 20:35:25 by sbednar           #+#    #+#              #
#    Updated: 2019/01/18 12:53:29 by edraugr-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	liblowlvlddd.a

SRC_DIR		=	./src
OBJ_DIR		=	./obj

SRC			= 	ddd_line.c \
				mtx4_init.c \
				mtx4_print.c \
				mtx4_set.c \
				mtx4_get.c \
				from3_to4.c \
				mtx3_det.c \
				mtx4_det.c \
				mtx4_rev.c \
				t_dots.c \
				mtx4_mult.c \
				mtx4x3_mult.c \
				mtx4_set_rot.c \
				mtx4_rot.c \
				ddd_vec2.c \
				ddd_vec3.c \
				ddd_vec4.c \
				ddd_mlx.c \
				wrdtocam.c \
				camtoscreen.c \
				init_cam.c \
				init_mouse.c \
				redraw.c \
				mtx4_cpy.c
				# init_info.c
				# draw_lines_arr.c
				# draw_rect.c
				# init_config.c
				# init_vector2.c
OBJ			=	$(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
INC			=	-I. -I../libft -I../minilibx

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
