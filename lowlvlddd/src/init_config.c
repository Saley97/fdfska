/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_config.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 23:04:38 by edraugr-          #+#    #+#             */
/*   Updated: 2018/12/25 23:17:59 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"
#include "../fdf.h"

t_config	*init_conf(void *mlx, void *win)
{
	t_config	*res;

	if (!(res = (t_config *)malloc(sizeof(t_config))))
		return (NULL);
	res->mlx_ptr = mlx;
	res->win_ptr = win;
	res->screen_x = SCREEN_X;
	res->screen_y = SCREEN_Y;
	return (res);
}
