/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 20:20:13 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 12:53:22 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "mlx.h"
# include "libft.h"
# include "lowlvlddd.h"
# include <stdlib.h>

# define SCREEN_X 1920
# define SCREEN_Y 1080
# define SCREEN_NAME "fdf"

int			read_dots(char *fn, t_dots **res);
void		solve_dots(t_dots *dots, const t_cam *cam);
int			print_dots(t_dots *res);

void		fill_screen(t_dots **d);
void		connect_dots(const t_mlx *c, t_dots **d);
int			hook_mouse_move(int x, int y, t_mouse *mouse);


#endif
