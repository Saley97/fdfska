/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vector2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 23:06:13 by edraugr-          #+#    #+#             */
/*   Updated: 2018/12/25 23:06:51 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

t_vector2	*init_vector2(int x, int y)
{
	t_vector2	*res;

	if (!(res = (t_vector2 *)malloc(sizeof(t_vector2))))
		return (NULL);
	res->x = x;
	res->y = y;
	return (res);
}
