/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 20:21:58 by edraugr-          #+#    #+#             */
/*   Updated: 2018/12/21 20:56:17 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"

t_config	*init_conf(void *mlx, void *win)
{
	t_config	*res;

	if (!(res = (t_config *)malloc(sizeof(t_config))))
		return (NULL);
	res->mlx_ptr = mlx;
	res->win_ptr = win;
	res->screen_x = SCREEN_X;
	res->screen_y = SCREEN_Y;
	return (res);
}

t_vector2	*init_vector2(int x, int y)
{
	t_vector2	*res;

	if (!(res = (t_vector2 *)malloc(sizeof(t_vector2))))
		return (NULL);
	res->x = x;
	res->y = y;
	return (res);
}

t_info		*init_info(int param, int color, int size, void **content)
{
	//todo: sdelat videl pamyati po normalnomu
	t_info	*res;
	if (!(res = (t_info *)malloc(sizeof(t_info))))
		return (NULL);
	res->param = param;
	res->color = color;
	res->size = size;
	res->content = content;
	return (res);
}

#include <stdio.h>

int	main()
{
	void		*mlx;
	void		*win;
	t_config	*conf;
	t_info		*i;

	mlx = mlx_init();
	win = mlx_new_window(mlx, SCREEN_X, SCREEN_Y, SCREEN_NAME);
	void **c;
	void **c1;
	
	c = (void **)malloc(2);
	c[0] = (void *)init_vector2(SCREEN_X / 2, SCREEN_Y / 2);
	c[1] = (void *)init_vector2(200, 100);
	c1 = (void **)malloc(2);
	c1[0] = (void *)init_vector2(1000, 1000);
	c1[1] = (void *)init_vector2(10, 10);


	if (!(conf = init_conf(mlx, win)) || !(i = init_info(0, 0xFF0000, 0, c)))
		return (1);
	for (int j = 0; j <= SCREEN_Y; j++)
	{	if (!(j % 40))
			for (int k = 0; k <= SCREEN_X; k++)
				if ((j == 0 || j == SCREEN_Y) && !(k % 40))
				{
					printf("%d\n", ddd_draw_line(conf, i));
					((t_vector2 *)(i->content[1]))->x = k;
					((t_vector2 *)(i->content[1]))->y = j;
					/*if (i->color == 0xFFFFFF)
						i->color = 0x000000;
					i->color += 0x107010;*/
					printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
					printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
					printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
					printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
				}
				else if (k == 0 || k == SCREEN_X)
				{
					printf("%d\n", ddd_draw_line(conf, i));
					((t_vector2 *)(i->content[1]))->x = k;
					((t_vector2 *)(i->content[1]))->y = j;
					/*if (i->color == 0xFFFFFF)
						i->color = 0x000000;
					i->color += 0x107010;*/
					printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
					printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
					printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
					printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
				}
	}
	i->param = 1;
	i->color = 0xAABBCC;
	i->content = c1;
//	printf("%d\n", ddd_draw_rect(conf, i));
	mlx_loop(mlx);
	return (0);
}
