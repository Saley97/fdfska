/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 04:34:11 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 13:23:13 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	mtx4_rot_x(const float a, const t_mtx4 *src, t_mtx4 *dst)
{
	t_mtx4	*rot;

	rot = mtx4_init(0.0f);
	mtx4_set_rot_x(a, rot);
	mtx4x3_mult(src, rot, dst);
	free(rot);
}

void	mtx4_rot_y(const float a, const t_mtx4 *src, t_mtx4 *dst)
{
	t_mtx4	*rot;

	rot = mtx4_init(0.0f);
	mtx4_set_rot_y(a, rot);
	mtx4x3_mult(src, rot, dst);
	mtx4_print(dst);
	free(rot);
}

void	mtx4_rot_z(const float a, const t_mtx4 *src, t_mtx4 *dst)
{
	t_mtx4	*rot;

	rot = mtx4_init(0.0f);
	mtx4_set_rot_z(a, rot);
	mtx4x3_mult(src, rot, dst);
	free(rot);
}
