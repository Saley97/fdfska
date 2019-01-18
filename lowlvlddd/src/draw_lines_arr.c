/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_lines_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 23:25:44 by edraugr-          #+#    #+#             */
/*   Updated: 2018/12/26 00:08:44 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

int	ddd_draw_lines_arr(const t_config *c, const t_info *prm)
{
	int			i;
	int			res;
	t_info		*tmp;
	t_vector2	p0;
	t_vector2	p1;

	i = 0;
	tmp = NULL;
	info_cpy_contall(tmp, prm, 2);
	ft_putendl("tut");
	while (++i < prm->size)
	{
		p0 = *((t_vector2 *)(prm->content[i-1]));
		p1 = *((t_vector2 *)(prm->content[i]));
		tmp->content[0] = (void *)&p0;
		tmp->content[1] = (void *)&p1;
		res = ddd_draw_line(c, tmp);
		if (res < 1)
			return (res);
	}
	return (res);
}
