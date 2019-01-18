/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrdtocam.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 06:04:10 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 13:21:07 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lowlvlddd.h"

void	wrdtocam(const t_vec4 *point, const t_mtx4 *camop, t_vec3 *res)
{
	// res->x = point->x * (camop->val[0] + camop->val[4] + camop->val[8]) + camop->val[12];
	// res->y = point->y * (camop->val[1] + camop->val[5] + camop->val[9]) + camop->val[13];
	// res->z = point->z * (camop->val[2] + camop->val[6] + camop->val[10]) + camop->val[14];
	res->x = point->x * camop->val[0] + point->y * camop->val[1] + point->z * camop->val[2] + camop->val[12];
	res->y = point->x * camop->val[4] + point->y * camop->val[5] + point->z * camop->val[6] + camop->val[13];
	res->z = point->x * camop->val[8] + point->y * camop->val[9] + point->z * camop->val[10] + camop->val[14];
	//vec3_print(res);
	//printf("\n");
}
