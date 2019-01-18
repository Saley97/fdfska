/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4x3_mult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 04:12:52 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 08:11:07 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	mtx4x3_mult(const t_mtx4 *a, const t_mtx4 *b, t_mtx4 *dst)
{
	int	c;
	int	r;
	int	i;

	r = -1;
	while (++r < 3)
	{
		c = -1;
		while (++c < 3)
		{
			i = -1;
			while (++i < 3)
				mtx4_set(dst, c, r, mtx4_get(dst, c, r) + mtx4_get(a, i, r) * mtx4_get(b, c, i));
		}
	}
	i = -1;
	while (++i < 4)
	{
		mtx4_set(dst, 3, i, mtx4_get(a, 3, i));
		mtx4_set(dst, i, 3, mtx4_get(a, i, 3));
	}
}
