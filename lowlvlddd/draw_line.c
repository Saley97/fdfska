/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 12:10:13 by edraugr-          #+#    #+#             */
/*   Updated: 2018/12/21 21:07:30 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

static void	draw(const t_config *c, t_vector2 p0, t_vector2 p1, const int col)
{
	double	h;
	int		dx;
	int		dy;

	dx = p1.x - p0.x;
	dy = p1.y - p0.y;
	h = 0;
	while ((dx >= 0 ? p0.x < p1.x : p0.x > p1.x))
	{
		mlx_pixel_put(c->mlx_ptr, c->win_ptr, p0.x, p0.y, col);
		h += (double)ABS(dy) / (double)ABS(dx);
		p0.y += h > 0.5 ? 0 : SIGN(dy);
		h -= h > 0.5 ? 1 : 0;
		p0.x += SIGN(dx);
	}
}

static void	draw_rev(const t_config *c, t_vector2 p0, t_vector2 p1, const int col)
{
	double	h;
	int		dx;
	int		dy;

	dx = p1.x - p0.x;
	dy = p1.y - p0.y;
	h = 0;
	while ((dx >= 0 ? p0.x < p1.x : p0.x > p1.x))
	{
		mlx_pixel_put(c->mlx_ptr, c->win_ptr, p0.y, p0.x, col);
		h += (double)ABS(dy) / (double)ABS(dx);
		p0.y += h > 0.5 ? 0 : SIGN(dy);
		h -= h > 0.5 ? 1 : 0;
		p0.x += -SIGN(dx);
	}
}

int			ddd_draw_line(const t_config *c, const t_info *inp)
{
	t_vector2	p0;
	t_vector2	p1;

	p0 = *(t_vector2 *)(inp->content[0]);
	p1 = *(t_vector2 *)(inp->content[1]);
	if ((float)((float)ABS(p1.y - p0.y) / (float)ABS(p1.x - p0.x)) >= 1 )
	{
		//return (0);
		ft_swap(&p0.x, &p0.y);
		ft_swap(&p1.x, &p1.y);
		draw_rev(c, p0, p1, inp->color);
	}
	else
		draw(c, p0, p1, inp->color);
	return (1);
}
/*	t_vector2	p1;
	t_vector2	p2;
	int			cur_x;
	int			cur_y;
	int			err;
	int			sign;

	p1 = *(t_vector2 *)(inp->content[0]);
	p2 = *(t_vector2 *)(inp->content[1]);
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
			mlx_pixel_put(c->mlx_ptr, c->win_ptr, cur_x, cur_y, inp->color);
		else
			mlx_pixel_put(c->mlx_ptr, c->win_ptr, cur_y, cur_x, inp->color);
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

/*static int	draw_line_reverse(t_config *c, t_info *inp)
{
	t_vector2	p1;
	t_vector2	p2;
	int			cur_x;
	int			cur_y;
	int			err;

	p1 = *(t_vector2 *)(inp->content[0]);
	p2 = *(t_vector2 *)(inp->content[1]);
	ft_swap(&p2.y, &p2.x);
	ft_swap(&p1.y, &p1.x);
	cur_x = p1.x;
	cur_y = p1.y;	
	err = (p2.x - p1.x) / 2;
	while (cur_x != p2.x)
	{
		mlx_pixel_put(c->mlx_ptr, c->win_ptr, cur_y, cur_x, inp->color);
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

static int	swap_and_ret(t_config *c, t_info *inp, int p)
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

int			ddd_draw_line(t_config *c, t_info *inp)
{
	t_vector2	*p1;
	t_vector2	*p2;
	int			dx;
	int			dy;

	p1 = (t_vector2 *)(inp->content[0]);
	p2 = (t_vector2 *)(inp->content[1]);
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
