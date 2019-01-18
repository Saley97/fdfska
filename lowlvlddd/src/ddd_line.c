/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ddd_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 12:10:13 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 07:42:45 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

// static void	draw(const t_mlx *c, t_vec2 p0, t_vec2 p1, const int col)
// {
// 	double	h;
// 	int		dx;
// 	int		dy;

// 	dx = p1.x - p0.x;
// 	dy = p1.y - p0.y;
// 	h = 0;
// 	while ((dx >= 0 ? p0.x < p1.x : p0.x > p1.x))
// 	{
// 		mlx_pixel_put(c->mlx, c->win, p0.x, p0.y, col);
// 		h += (double)ABS(dy) / (double)ABS(dx);
// 		p0.y += h > 0.5 ? 0 : SIGN(dy);
// 		h -= h > 0.5 ? 1 : 0;
// 		p0.x += SIGN(dx);
// 	}
// }

// static void	draw_rev(const t_mlx *c, t_vec2 p0, t_vec2 p1, const int col)
// {
// 	double	h;
// 	int		dx;
// 	int		dy;

// 	dx = p1.x - p0.x;
// 	dy = p1.y - p0.y;
// 	h = 0;
// 	while ((dx >= 0 ? p0.x < p1.x : p0.x > p1.x))
// 	{
// 		mlx_pixel_put(c->mlx, c->win, p0.y, p0.x, col);
// 		h += (double)ABS(dy) / (double)ABS(dx);
// 		p0.y += h > 0.5 ? 0 : SIGN(dy);
// 		h -= h > 0.5 ? 1 : 0;
// 		p0.x += -SIGN(dx);
// 	}
// }

int 			color_lerp(int c1, int c2, float step)
{
	int	res;

	res = 0;
	res |= (((int)((((int)((c2 >> 16) & 0xFF)) -
		((int)((c1 >> 16) & 0xFF))) * step)) +
		((c1 >> 16) & 0xFF)) << 16;
	res |= (((int)((((int)((c2 >> 8) & 0xFF)) -
		((int)((c1 >> 8) & 0xFF))) * step)) +
		((c1 >> 8) & 0xFF)) << 8;
	res |= (((int)((((int)((c2 >> 0) & 0xFF)) -
		((int)((c1 >> 0) & 0xFF))) * step)) +
		((c1 >> 0) & 0xFF)) << 0;
	return (res);
}

int				draw_line(t_mlx const *mlx, t_vec2 const *v1, t_vec2 const *v2, int c1, int c2)
{
	printf("draw line from ");
	vec2_print(v1);
	printf(" to ");
	vec2_print(v2);
	printf(" and color %d to %d\n", c1, c2);
	t_vec2 *d = vec2_new(abs(v2->x - v1->x), abs(v2->y - v1->y));
	t_vec2 *s = vec2_new(SIGN(v2->x - v1->x), SIGN(v2->y - v1->y));
	int err = (d->x > d->y ? d->x : -d->y) / 2;
	int e2;
	int xt = v1->x;
	int	yt = v1->y;
	while (xt != v2->x || yt != v2->y)
	{
		mlx_pixel_put(mlx->mlx, mlx->win, xt, yt,
			color_lerp(c1, c2,
				fabs(sqrt(xt * xt + yt * yt) - sqrt(v1->x * v1->x + v1->y * v1->y)) /
				fabs(sqrt(v2->x * v2->x + v2->y * v2->y) - sqrt(v1->x * v1->x + v1->y * v1->y))
			)
		);
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

// int			ddd_draw_line(const t_mlx *c, const t_info *inp)
// {
// 	t_vec2	p0;
// 	t_vec2	p1;

// 	p0 = *(t_vec2 *)(inp->content[0]);
// 	p1 = *(t_vec2 *)(inp->content[1]);
// 	if ((float)((float)ABS(p1.y - p0.y) / (float)ABS(p1.x - p0.x)) >= 1 )
// 	{
// 		//return (0);
// 		ft_swap(&p0.x, &p0.y);
// 		ft_swap(&p1.x, &p1.y);
// 		draw_rev(c, p0, p1, inp->color);
// 	}
// 	else
// 		draw(c, p0, p1, inp->color);
// 	return (1);
// }

/*	t_vec2	p1;
	t_vec2	p2;
	int			cur_x;
	int			cur_y;
	int			err;
	int			sign;

	p1 = *(t_vec2 *)(inp->content[0]);
	p2 = *(t_vec2 *)(inp->content[1]);
	cur_x = p1.x;
	cur_y = p1.y;
	if ((sign = (ABS(p2.y - p1.y) > ABS(p2.x - p1.x))))
	{
		ft_swap(&p2.x, &p2.y);
		ft_swap(&p1.x, &p1.y);
	}
	if (p1.x > p2.x)
	{
		ft_swap(&p2.x, &p1.x);
		ft_swap(&p2.y, &p1.y);
	}
	err = (p2.x - p1.x) / 2;
	while (cur_x <= p2.x)
	{
		if (!sign)
			mlx_pixel_put(c->mlx, c->win, cur_x, cur_y, inp->color);
		else
			mlx_pixel_put(c->mlx, c->win, cur_y, cur_x, inp->color);
		err -= ABS(p2.y - p1.y);
		if (err < 0)
		{
			cur_y += p1.y < p2.y ? 1 : -1;
			err += p2.x - p1.x;
		}
		cur_x++;
	}
	return (FUNC_OK);
}*/

/*static int	draw_line_reverse(t_mlx *c, t_info *inp)
{
	t_vec2	p1;
	t_vec2	p2;
	int			cur_x;
	int			cur_y;
	int			err;

	p1 = *(t_vec2 *)(inp->content[0]);
	p2 = *(t_vec2 *)(inp->content[1]);
	ft_swap(&p2.y, &p2.x);
	ft_swap(&p1.y, &p1.x);
	cur_x = p1.x;
	cur_y = p1.y;
	err = (p2.x - p1.x) / 2;
	while (cur_x != p2.x)
	{
		mlx_pixel_put(c->mlx, c->win, cur_y, cur_x, inp->color);
		err -= p1.y > p2.y ? p1.y - p2.y : p2.y - p1.y;
		if (err < 0)
		{
			cur_y += p1.y > p2.y ? -1 : 1;
			err += p2.x - p1.x;
		}
		cur_x += p1.x > p2.x ? -1 : 1;
	}
	return (FUNC_OK);
}


static void	swap_c(void **c)
{
	void	*t;

	t = c[0];
	c[0] = c[1];
	c[1] = t;
}

static int	swap_and_ret(t_mlx *c, t_info *inp, int p)
{
	int	res = 0;

	swap_c(inp->content);
	if (p)
		res = draw_line_reverse(c, inp);
	else
		res = draw_line(c, inp);
	swap_c(inp->content);
	return (res);
}

int			ddd_draw_line(t_mlx *c, t_info *inp)
{
	t_vec2	*p1;
	t_vec2	*p2;
	int			dx;
	int			dy;

	p1 = (t_vec2 *)(inp->content[0]);
	p2 = (t_vec2 *)(inp->content[1]);
	if (!p1 || !p2)
		return (FUNC_INV_PRM);
	dx = p1->x - p2->x;
	dx *= dx > 0 ? 1 : -1;
	dy = p1->y - p2->y;
	dy *= dy > 0 ? 1 : -1;
	if (dx > dy)
		return ((p1->y - p2->y > 0) ? (swap_and_ret(c, inp, 1)) : draw_line_reverse(c, inp));
	return ((p1->x - p2->x > 0) ? (swap_and_ret(c, inp, 0)) : draw_line(c, inp));
}*/
