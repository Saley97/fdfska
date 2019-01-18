/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ddd_vec2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 03:29:42 by sbednar           #+#    #+#             */
/*   Updated: 2019/01/18 03:38:14 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

t_vec2	*vec2_init(void)
{
	t_vec2	*vr;

	if (!(vr = (t_vec2 *)malloc(sizeof(*vr))))
		return (NULL);
	return (vr);
}

t_vec2	*vec2_new(int const x, int const y)
{
	t_vec2	*vr;

	if (!(vr = vec2_init()))
		return (NULL);
	vr->x = x;
	vr->y = y;
	return (vr);
}

t_vec2	*vec2_opp(t_vec2 const *v)
{
	t_vec2	*vr;

	if (!(vr = vec2_init()))
		return (NULL);
	vr->x = -v->x;
	vr->y = -v->y;
	return (vr);
}

t_vec2	*vec2_sum(t_vec2 const *v1, t_vec2 const *v2)
{
	t_vec2	*vr;

	if (!(vr = vec2_init()))
		return (NULL);
	vr->x = v1->x + v2->x;
	vr->y = v1->y + v2->y;
	return (vr);
}

t_vec2	*vec2_mult(t_vec2 const *v, float const s)
{
	t_vec2	*vr;

	if (!(vr = vec2_init()))
		return (NULL);
	vr->x = v->x * s;
	vr->y = v->y * s;
	return (vr);
}

t_vec2	*vec2_copy(t_vec2 const *v)
{
	t_vec2	*vr;

	if (!(vr = vec2_init()))
		return (NULL);
	vr->x = v->x;
	vr->y = v->y;
	return (vr);
}

void	vec2_print(t_vec2 const *v)
{
	printf("(%d,%d)", v->x, v->y);
}
