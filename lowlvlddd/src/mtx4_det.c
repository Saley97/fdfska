/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4_det.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 00:47:58 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 00:53:49 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

float	mtx4_det(const t_mtx4 *mtx)
{
	return (mtx4_get(mtx, 0, 0) * mtx3_det(mtx, 0, 0)
		- mtx4_get(mtx, 1, 0) * mtx3_det(mtx, 1, 0)
		+ mtx4_get(mtx, 2, 0) * mtx3_det(mtx, 2, 0)
		- mtx4_get(mtx, 3, 0) * mtx3_det(mtx, 3, 0));
}
