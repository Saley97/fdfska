/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4_mult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 03:19:32 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 03:53:07 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	mtx4_mult(const t_mtx4 *a, const t_mtx4 *b, t_mtx4 *dst)
{
	int	c;
	int	r;
	int	i;

	r = -1;
	while (++r < 4)
	{
		c = -1;
		while (++c < 4)
		{
			i = -1;
			while (++i < 4)
				mtx4_set(dst, c, r, mtx4_get(dst, c, r) + mtx4_get(a, i, r) * mtx4_get(b, c, i));
		}
	}
}
