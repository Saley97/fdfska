/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camtoscreen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 06:20:46 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 13:21:15 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	iso_camtoscreen(const t_vec3 *point, t_vec2 *res)
{
	res->x = SCREEN_X / 2 + (int)(point->x * UNIT);
	res->y = SCREEN_Y / 2 + (int)(point->y * UNIT);
	//vec2_print(res);
	//printf("\n\n");
}

void	persp_camtoscreen(const t_vec3 *point, t_vec2 *res, const t_cam *cam)
{
	res->x = SCREEN_X / 2 + (int)((point->x / (point->z * cam->focus)) * UNIT);
	res->y = SCREEN_Y / 2 + (int)((point->y / (point->z * cam->focus)) * UNIT);
	//vec2_print(res);
	//printf("\n\n");
}
