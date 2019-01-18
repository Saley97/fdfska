/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ddd_vec4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by sbednar           #+#    #+#             */
/*   Updated: 2019/01/18 03:38:22 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

t_vec4			*vec4_init(void)
{
	t_vec4	*vr;

	if (!(vr = (t_vec4 *)malloc(sizeof(*vr))))
		return (NULL);
	return (vr);
}

t_vec4 inline	*vec4_opp(t_vec4 const *v)
{
	t_vec4	*vr;

	if (!(vr = vec4_init()))
		return (NULL);
	vr->x = -v->x;
	vr->y = -v->y;
	vr->z = -v->z;
	vr->w = -v->z;
	return (vr);
}

t_vec4 inline	*vec4_sum(t_vec4 const *v1, t_vec4 const *v2)
{
	t_vec4	*vr;

	if (!(vr = vec4_init()))
		return (NULL);
	vr->x = v1->x + v2->x;
	vr->y = v1->y + v2->y;
	vr->z = v1->z + v2->z;
	vr->w = v1->w + v2->w;
	return (vr);
}

void inline		vec4_print(t_vec4 const *v)
{
	printf("(%.3f,%.3f,%.3f,%.3f)", v->x, v->y, v->z, v->w);
}
