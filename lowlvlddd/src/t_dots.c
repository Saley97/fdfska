/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_dots.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 00:37:22 by sbednar           #+#    #+#             */
/*   Updated: 2019/01/18 03:07:56 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	t_dots_del(t_dots **d)
{
	int	i;
	int	count;

	if (!d || !*d)
		return ;
	i = -1;
	count = (*d)->xc * (*d)->yc;
	while (++i < count)
		free((*d)->local[i]);
	free(*d);
	*d = NULL;
}
