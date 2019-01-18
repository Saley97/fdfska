/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 12:10:13 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 04:28:32 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"
#include <stdio.h>

// static void	draw(const t_config *c, t_vector2 p0, t_vector2 p1, const int col)
// {
// 	double	h;
// 	int		dx;
// 	int		dy;

// 	dx = p1.x - p0.x;
// 	dy = p1.y - p0.y;
// 	h = 0;
// 	while ((dx >= 0 ? (p0.x < p1.x) : (p0.x > p1.x)))
// 	{
// 		mlx_pixel_put(c->mlx_ptr, c->win_ptr, p0.x, p0.y, col);
// 		h += ((double)ABS(dy)) / ((double)ABS(dx));
// 		p0.y += h <= 0.5 ? 0 : SIGN(dy);
// 		h -= h > 0.5 ? 1 : 0;
// 		p0.x += SIGN(dx);
// 	}
// }

// static void	draw_rev(const t_config *c, t_vector2 p0,
// 		t_vector2 p1, const int col)
// {
// 	double	h;
// 	int		dx;
// 	int		dy;

// 	dx = p1.x - p0.x;
// 	dy = p1.y - p0.y;
// 	h = 0;
// 	while ((dx >= 0 ? (p0.x < p1.x) : (p0.x > p1.x)))
// 	{
// 		mlx_pixel_put(c->mlx_ptr, c->win_ptr, p0.y, p0.x, col);
// 		h += ((double)ABS(dy)) / ((double)ABS(dx));
// 		p0.y += h <= 0.5 ? 0 : SIGN(dy);
// 		h -= h > 0.5 ? 1 : 0;
// 		p0.x += SIGN(dx);
// 	}
// }

// int			ddd_draw_line(const t_config *c, const t_info *inp)
// {
// 	t_vector2	p0;
// 	t_vector2	p1;

// 	p0 = *(t_vector2 *)(inp->content[0]);
// 	p1 = *(t_vector2 *)(inp->content[1]);
// 	if ((float)((float)ABS((p1.y - p0.y)) / (float)ABS((p1.x - p0.x))) > 1)
// 	{
// 		ft_swap(&p0.x, &p0.y);
// 		ft_swap(&p1.x, &p1.y);
// 		draw_rev(c, p0, p1, inp->color);
// 	}
// 	else
// 		draw(c, p0, p1, inp->color);
// 	return (1);
// }

int		draw_line(t_mlx const *mlx, t_vec2 const *v1, t_vec2 const *v2, int c1, int c2)
{
	printf("draw line from ");
	vec2_print(v1);
	printf(" to ");
	vec2_print(v2);
	printf("\n");
	t_vec2 *d = vec2_new(abs(v2->x - v1->x), abs(v2->y - v1->y));
	t_vec2 *s = vec2_new(SIGN(v2->x - v1->x), SIGN(v2->y - v1->y));
	int err = (d->x > d->y ? d->x : -d->y) / 2;
	int e2;
	int xt = v1->x;
	int	yt = v1->y;
	while (xt != v2->x || yt != v2->y)
	{
		mlx_pixel_put(mlx->mlx, mlx->win, xt, yt, 0xFFFFFF);
		e2 = err;
		if (e2 > -d->x)
		{
			err -= d->y;
			xt += s->x;
		}
		if (e2 < d->y)
		{
			err += d->x;
			yt += s->y;
		}
	}
	return (1);
}
