/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mouse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:24:05 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 13:08:58 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

t_mouse	*init_mouse(t_mlx *mlx, const float sence, t_cam **cam, t_dots *dots)
{
	t_mouse	*res;

	if (!(res = (t_mouse *)malloc(sizeof(t_mouse))))
		return (NULL);
	res->x = 0;
	res->y = 0;
	res->prev_x = 0;
	res->prev_y = 0;
	res->sence = sence;
	res->error = 0;
	res->cam = cam;
	res->dots = dots;
	res->mlx = mlx;
	return (res);
}
