/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx4_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 22:58:25 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/17 23:08:20 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

t_mtx4	*mtx4_init(const float val)
{
	t_mtx4	*res;
	int		i;

	i = -1;
	if (!(res = (t_mtx4 *)malloc(sizeof(t_mtx4))))
		return (NULL);
	while (++i < 16)
		res->val[i] = val;
	return (res);
}
