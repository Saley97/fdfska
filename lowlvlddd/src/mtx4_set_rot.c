/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4_set_rot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 04:20:17 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 09:07:36 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	mtx4_set_rot_x(const float a, t_mtx4 *dst)
{
	float	c;
	float	s;

	c = cosf(a);
	s = sinf(a);
	mtx4_set(dst, 0, 0, 1.0f);
	mtx4_set(dst, 1, 0, 0.0f);
	mtx4_set(dst, 2, 0, 0.0f);
	mtx4_set(dst, 0, 1, 0.0f);
	mtx4_set(dst, 1, 1, c);
	mtx4_set(dst, 2, 1, s);
	mtx4_set(dst, 0, 2, 0);
	mtx4_set(dst, 1, 2, -s);
	mtx4_set(dst, 2, 2, c);
}

void	mtx4_set_rot_y(const float a, t_mtx4 *dst)
{
	float	c;
	float	s;

	c = cosf(((a * ((float)M_PI)) / 180.0f));
	s = sinf(((a * ((float)M_PI)) / 180.0f));
	mtx4_set(dst, 0, 0, c);
	mtx4_set(dst, 1, 0, 0.0f);
	mtx4_set(dst, 2, 0, -s);
	mtx4_set(dst, 0, 1, 0.0f);
	mtx4_set(dst, 1, 1, 1.0f);
	mtx4_set(dst, 2, 1, 0.0f);
	mtx4_set(dst, 0, 2, s);
	mtx4_set(dst, 1, 2, 0.0f);
	mtx4_set(dst, 2, 2, c);
}

void	mtx4_set_rot_z(const float a, t_mtx4 *dst)
{
	float	c;
	float	s;

	c = cosf(((a * ((float)M_PI)) / 180.0f));
	s = sinf(((a * ((float)M_PI)) / 180.0f));
	mtx4_set(dst, 0, 0, c);
	mtx4_set(dst, 1, 0, s);
	mtx4_set(dst, 2, 0, 0.0f);
	mtx4_set(dst, 0, 1, -s);
	mtx4_set(dst, 1, 1, c);
	mtx4_set(dst, 2, 1, 0.0f);
	mtx4_set(dst, 0, 2, 0.0f);
	mtx4_set(dst, 1, 2, 0.0f);
	mtx4_set(dst, 2, 2, 1.0f);
}
