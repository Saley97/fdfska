/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ddd_vec3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by sbednar           #+#    #+#             */
/*   Updated: 2019/01/18 07:02:58 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

t_vec3			*vec3_init(void)
{
	t_vec3	*vr;

	if (!(vr = (t_vec3 *)malloc(sizeof(*vr))))
		return (NULL);
	return (vr);
}

t_vec3	*vec3_new(float const x, float const y, float const z)
{
	t_vec3	*vr;

	if (!(vr = vec3_init()))
		return (NULL);
	vr->x = x;
	vr->y = y;
	vr->z = z;
	return (vr);
}

t_vec3 inline	*vec3_opp(t_vec3 const *v)
{
	t_vec3	*vr;

	if (!(vr = vec3_init()))
		return (NULL);
	vr->x = -v->x;
	vr->y = -v->y;
	vr->z = -v->z;
	return (vr);
}

t_vec3 inline	*vec3_sum(t_vec3 const *v1, t_vec3 const *v2)
{
	t_vec3	*vr;

	if (!(vr = vec3_init()))
		return (NULL);
	vr->x = v1->x + v2->x;
	vr->y = v1->y + v2->y;
	vr->z = v1->z + v2->z;
	return (vr);
}

void inline		vec3_print(t_vec3 const *v)
{
	printf("(%.3f,%.3f,%.3f)", v->x, v->y, v->z);
}
