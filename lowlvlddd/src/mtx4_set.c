/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 23:43:47 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 07:53:08 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	mtx4_set(t_mtx4 *mtx, const int col, const int row, const float val)
{
	mtx->val[row * 4 + col] = val;
}
