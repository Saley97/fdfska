/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:17:26 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 12:20:32 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	solve_dots(t_dots *dots, const t_cam *cam)
{
	int	i;
	int	c;

	i = -1;
	c = dots->xc * dots->yc;
	while (++i < c)
	{
		wrdtocam(dots->local[i], cam->camops, dots->cam[i]);
		//persp_camtoscreen(dots->cam[i], dots->screen[i], cam);
		iso_camtoscreen(dots->cam[i], dots->screen[i]);
	}
}

void	redraw(t_dots *dots, const t_cam *cam)
{
	solve_dots(dots, cam);
}
