/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4_rev.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 02:29:07 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 03:45:51 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	mtx4_rev(const t_mtx4 *src, t_mtx4 *dst)
{
	int		c;
	int		r;
	float	det;

	r = -1;
	det = mtx4_det(src);
	while (++r < 4)
	{
		c = -1;
		while (++c < 4)
			dst->val[c * 4 + r] = (((c + r) % 2) ? -1.0f : 1.0f) / det
				* mtx3_det(src, c, r);
	}
}
