/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:01:41 by edraugr-          #+#    #+#             */
/*   Updated: 2018/12/25 23:00:36 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

static int	draw_start_end(t_config *conf, t_info *param)
{
	int	x;
	int	y;
	int	i;
	int	j;
	int	tmp;

	x = ((t_vector2 *)(param->content[1]))->x;
	y = ((t_vector2 *)(param->content[1]))->y;
	j = ((t_vector2 *)(param->content[0]))->x;
	i = ((t_vector2 *)(param->content[0]))->y;
	x > j ? NULL : ft_swap(&x, &j);
	y > i ? NULL : ft_swap(&y, &i);
	tmp = j;
	while (i <= y)
	{
		j = tmp;
		while (j <= x)
			mlx_pixel_put(conf->mlx_ptr, conf->win_ptr, j++, i, param->color);
		i++;
	}
	return (FUNC_OK);
}

static int	draw_start_size(t_config *conf, t_info *param)
{
	int	x;
	int	y;
	int	w;
	int	h;
	int	tmp;

	x = ((t_vector2 *)(param->content[0]))->x;
	y = ((t_vector2 *)(param->content[0]))->y;
	w = ((t_vector2 *)(param->content[1]))->x;
	h = ((t_vector2 *)(param->content[1]))->y;
	if (h < 0 || w < 0)
		return (FUNC_INV_PRM);
	tmp = w;
	while (h >= 0)
	{
		w = tmp;
		while (w >= 0)
			mlx_pixel_put(conf->mlx_ptr, conf->win_ptr,
					x + w--, y + h, param->color);
		h--;
	}
	return (FUNC_OK);
}

int			ddd_draw_rect(t_config *conf, t_info *param)
{
	if (!conf || !param)
		return (FUNC_INV_PRM);
	if (param->param == 0)
		return (draw_start_end(conf, param));
	else if (param->param == 1)
		return (draw_start_size(conf, param));
	else
		return (FUNC_INV_PRM);
}
