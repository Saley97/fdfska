/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx3_det.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 00:19:13 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 00:38:22 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

float	mtx3_det(const t_mtx4 *src, const int out_col, const int out_row)
{
	return (mtx4_get(src, f3t4_col(0, out_col), f3t4_row(0, out_row))
		* mtx4_get(src, f3t4_col(1, out_col), f3t4_row(1, out_row))
		* mtx4_get(src, f3t4_col(2, out_col), f3t4_row(2, out_row))
		+ mtx4_get(src, f3t4_col(0, out_col), f3t4_row(1, out_row))
		* mtx4_get(src, f3t4_col(1, out_col), f3t4_row(2, out_row))
		* mtx4_get(src, f3t4_col(2, out_col), f3t4_row(0, out_row))
		+ mtx4_get(src, f3t4_col(0, out_col), f3t4_row(2, out_row))
		* mtx4_get(src, f3t4_col(1, out_col), f3t4_row(0, out_row))
		* mtx4_get(src, f3t4_col(2, out_col), f3t4_row(1, out_row))
		- mtx4_get(src, f3t4_col(2, out_col), f3t4_row(0, out_row))
		* mtx4_get(src, f3t4_col(1, out_col), f3t4_row(1, out_row))
		* mtx4_get(src, f3t4_col(0, out_col), f3t4_row(2, out_row))
		- mtx4_get(src, f3t4_col(2, out_col), f3t4_row(1, out_row))
		* mtx4_get(src, f3t4_col(1, out_col), f3t4_row(2, out_row))
		* mtx4_get(src, f3t4_col(0, out_col), f3t4_row(0, out_row))
		- mtx4_get(src, f3t4_col(2, out_col), f3t4_row(2, out_row))
		* mtx4_get(src, f3t4_col(1, out_col), f3t4_row(0, out_row))
		* mtx4_get(src, f3t4_col(0, out_col), f3t4_row(1, out_row)));
}
