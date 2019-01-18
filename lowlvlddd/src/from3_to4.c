/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from3_to4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 00:06:36 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 00:17:50 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

int	f3t4_col(const int col3, const int out_col)
{
	return (col3 < out_col ? col3 : col3 + 1);
}

int	f3t4_row(const int row3, const int out_row)
{
	return (row3 < out_row ? row3 : row3 + 1);
}
