/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_mouse_move.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:55:35 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 13:10:37 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	hook_mouse_move(int x, int y, t_mouse *mouse)
{
	int		dx;
	int		dy;
	t_mtx4	*temp;

	mouse->prev_x = mouse->x;
	mouse->prev_y = mouse->y;
	mouse->y = y;
	mouse->x = x;
	temp = mtx4_cpy((*(mouse->cam))->cam);
	dx = ABS((mouse->prev_x - mouse->x));
	dy = ABS((mouse->prev_y - mouse->y));
	printf("%d, %d \n", dx, dy);
	if (dx > mouse->error && dx < 100)
	{
		mtx4_rot_y((float)dx * mouse->sence, temp, (*(mouse->cam))->cam);
		//printf("rot y\n");
	}
	if (dy > mouse->error && dy < 100)
	{
		mtx4_rot_x((float)dy * mouse->sence, temp, (*(mouse->cam))->cam);
		//printf("rot x\n");
	}
	if (dx > mouse->error || dy > mouse->error)
	{
		redraw(mouse->dots, *(mouse->cam));
		connect_dots(mouse->mlx, &(mouse->dots));
	}
	free(temp);
	return (0);
}
