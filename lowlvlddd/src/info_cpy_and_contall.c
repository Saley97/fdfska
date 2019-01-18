/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_cpy_and_contall.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 23:37:46 by edraugr-          #+#    #+#             */
/*   Updated: 2018/12/25 23:46:59 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	info_cpy_contall(t_info *dst, const t_info *src, size_t n)
{
	void	**tmp;

	if (!(tmp = (void **)malloc(n))
			|| !(dst = (t_info *)malloc(sizeof(t_info))))
		return ;
	dst->param = src->param;
	dst->color = src->color;
	dst->size = (int)n;
	dst->content = tmp;
}
