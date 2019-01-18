/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cam.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 06:48:26 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 10:06:32 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

static void	fillcam(t_mtx4 **cam)
{
	t_mtx4	*rev;

	rev = mtx4_init(0.0f);
	mtx4_set(*cam, 0, 0, 1.0f);
	mtx4_set(*cam, 1, 0, 0.0f);
	mtx4_set(*cam, 2, 0, 0.0f);
	mtx4_set(*cam, 3, 0, 0.0f);
	mtx4_set(*cam, 0, 1, 0.0f);
	mtx4_set(*cam, 1, 1, -1.0f);
	mtx4_set(*cam, 2, 1, 0.0f);
	mtx4_set(*cam, 3, 1, 0.0f);
	mtx4_set(*cam, 0, 2, 0.0f);
	mtx4_set(*cam, 1, 2, 0.0f);
	mtx4_set(*cam, 2, 2, -1.0f);
	mtx4_set(*cam, 3, 2, 0.0f);
	mtx4_set(*cam, 0, 3, 0.0f);
	mtx4_set(*cam, 1, 3, 7.0f);
	mtx4_set(*cam, 2, 3, 0.0f);
	mtx4_set(*cam, 3, 3, 1.0f);
	mtx4_rot_x(30.0f, *cam, rev);
	free(*cam);
	*cam = rev;
	rev = mtx4_init(0.0f);
// //	mtx4_print(*cam);

	mtx4_rot_y(45.0f, *cam, rev);
	free(*cam);
	*cam = rev;
// 	rev = mtx4_init(0.0f);
//	mtx4_print(*cam);

	// mtx4_rot_y(30.0f, *cam, rev);
	// free(*cam);
	// *cam = rev;
//	mtx4_print(*cam);
}

t_cam		*init_cam(void)
{
	t_cam	*res;

	if(!(res = (t_cam *)malloc(sizeof(t_cam))))
		return (NULL);
	res->cam = mtx4_init(0.0f);
	res->camops = mtx4_init(0.0f);
	fillcam(&(res->cam));
	mtx4_rev(res->cam, res->camops);
	res->mode = CAM_PERSP;
	res->focus = 2.0f;
//	mtx4_print(res->cam);
//	mtx4_print(res->camops);
	return (res);
}
