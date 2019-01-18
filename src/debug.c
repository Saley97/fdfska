/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 03:12:29 by sbednar           #+#    #+#             */
/*   Updated: 2019/01/18 06:11:13 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fill_screen(t_dots **d)
{
	int	i;
	int	j;

	(*d)->screen = (t_vec2 **)malloc(sizeof(t_vec2 *) * (*d)->xc * (*d)->yc);
	i = -1;
	while (++i < (*d)->yc)
	{
		j = -1;
		while (++j < (*d)->xc)
		{
			(*d)->screen[i * (*d)->xc + j] = vec2_new((int)(*d)->local[i * (*d)->xc + j]->x * 100 + 100, (int)(*d)->local[i * (*d)->xc + j]->y * 100 + 100);
		}
	}
}
