/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 03:23:03 by sbednar           #+#    #+#             */
/*   Updated: 2019/01/18 12:17:51 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	connect_dots(const t_mlx *c, t_dots **d)
{
	int	i;
	int	j;
	int	xc;
	int	yc;

	if (!d || !*d)
		return ;
	xc = (*d)->xc;
	yc = (*d)->yc;
	i = -1;
	while (++i < yc)
	{
		j = -1;
		while (++j < xc)
		{
			(j != xc - 1 ? draw_line(c, (*d)->screen[i * xc + j],
				(*d)->screen[i * xc + j + 1], (int)(*d)->local[i * xc + j]->w,
				(int)(*d)->local[i * xc + j + 1]->w) : 0);
			(i != yc - 1 ? draw_line(c, (*d)->screen[i * xc + j],
			(*d)->screen[(i + 1) * xc + j], (int)(*d)->local[i * xc + j]->w,
			(int)(*d)->local[(i + 1) * xc + j]->w) : 0);
		}
	}
}

// void	solve_dots(t_dots *dots, const t_cam *cam)
// {
// 	int	i;
// 	int	c;

// 	i = -1;
// 	c = dots->xc * dots->yc;
// 	while (++i < c)
// 	{
// 		wrdtocam(dots->local[i], cam->camops, dots->cam[i]);
// 		//persp_camtoscreen(dots->cam[i], dots->screen[i], cam);
// 		iso_camtoscreen(dots->cam[i], dots->screen[i]);
// 	}
// }
