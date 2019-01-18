/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 23:07:04 by edraugr-          #+#    #+#             */
/*   Updated: 2018/12/25 23:22:06 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

t_info		*init_info(int param, int color, int size, void **content)
{
	t_info	*res;

	if (!(res = (t_info *)malloc(sizeof(t_info))))
		return (NULL);
	res->param = param;
	res->color = color;
	res->size = size;
	res->content = content;
	return (res);
}
