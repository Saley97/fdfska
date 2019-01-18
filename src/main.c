/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 20:21:58 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 13:12:20 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"

/*t_config	*init_conf(void *mlx, void *win)
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
}*/

#include <stdio.h>

// int	main()
// {
// 	void		*mlx;
// 	void		*win;
// 	t_config	*conf;
// 	t_info		*i;

// 	mlx = mlx_init();
// 	win = mlx_new_window(mlx, SCREEN_X, SCREEN_Y, SCREEN_NAME);
// 	void **c;
// 	void **c1;

// 	printf("tut");
// 	c = (void **)malloc(2);
// 	c[0] = (void *)init_vector2(SCREEN_X / 2, SCREEN_Y / 2);
// 	c[1] = (void *)init_vector2(200, 100);
// 	c1 = (void **)malloc(6);
// 	c1[0] = (void *)init_vector2(280, 250);
// 	c1[1] = (void *)init_vector2(370, 310);
// 	c1[2] = (void *)init_vector2(230, 310);
// 	c1[3] = (void *)init_vector2(320, 250);
// 	c1[4] = (void *)init_vector2(300, 370);
// 	c1[5] = (void *)init_vector2(280, 250);


// 	if (!(conf = init_conf(mlx, win)) || !(i = init_info(0, 0xFF0000, 6, c1)))
// 		return (1);
// 	printf("tut");
// 	//ddd_draw_lines_arr(conf, i);
// 	/*for (int j = 0; j <= SCREEN_Y; j++)
// 	{	if (1)//!(j % 40))
// 			for (int k = 0; k <= SCREEN_X; k++)
// 				if ((j == 0 || j == SCREEN_Y))// && !(k % 40))
// 				{
// 					printf("%d\n", ddd_draw_line(conf, i));
// 					((t_vector2 *)(i->content[1]))->x = k;
// 					((t_vector2 *)(i->content[1]))->y = j;
// 					if (i->color == 0xFFFFFF)
// 						i->color = 0x000000;
// 					i->color += 0x107010;
// 					printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 					printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 					printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 					printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 				}
// 				else if (k == 0 || k == SCREEN_X)
// 				{
// 					printf("%d\n", ddd_draw_line(conf, i));
// 					((t_vector2 *)(i->content[1]))->x = k;
// 					((t_vector2 *)(i->content[1]))->y = j;
// 					if (i->color == 0xFFFFFF)
// 						i->color = 0x000000;
// 					i->color += 0x107010;
// 					printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 					printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 					printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 					printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 				}
// 	}*/


// 	/*((t_vector2 *)(i->content[1]))->x = SCREEN_X / 4;
// 	((t_vector2 *)(i->content[1]))->y = SCREEN_Y;
// 	i->color = 0xFFFFFF;
// 	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 	printf("%d\n", ddd_draw_line(conf, i));

// 	((t_vector2 *)(i->content[1]))->x = SCREEN_X / 4;
// 	((t_vector2 *)(i->content[1]))->y = 0;
// 	i->color = 0xFF0000;
// 	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 	printf("%d\n", ddd_draw_line(conf, i));

// 	((t_vector2 *)(i->content[1]))->x = 3 * (SCREEN_X / 4);
// 	((t_vector2 *)(i->content[1]))->y = 0;
// 	i->color = 0x00FF00;
// 	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 	printf("%d\n", ddd_draw_line(conf, i));

// 	((t_vector2 *)(i->content[1]))->x = 3 * (SCREEN_X / 4);
// 	((t_vector2 *)(i->content[1]))->y = SCREEN_Y;
// 	i->color = 0x0000FF;
// 	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 	printf("%d\n", ddd_draw_line(conf, i));



// 	((t_vector2 *)(i->content[1]))->x = 0;
// 	((t_vector2 *)(i->content[1]))->y = SCREEN_Y / 4;
// 	i->color = 0xFFFFFF;
// 	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 	printf("%d\n", ddd_draw_line(conf, i));

// 	((t_vector2 *)(i->content[1]))->x = 0;
// 	((t_vector2 *)(i->content[1]))->y = 3 * (SCREEN_Y / 4);
// 	i->color = 0xFF0000;
// 	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 	printf("%d\n", ddd_draw_line(conf, i));

// 	((t_vector2 *)(i->content[1]))->x = SCREEN_X;
// 	((t_vector2 *)(i->content[1]))->y = SCREEN_Y / 4;
// 	i->color = 0x00FF00;
// 	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 	printf("%d\n", ddd_draw_line(conf, i));

// 	((t_vector2 *)(i->content[1]))->x = SCREEN_X;
// 	((t_vector2 *)(i->content[1]))->y = 3 * (SCREEN_Y / 4);
// 	i->color = 0x0000FF;
// 	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
// 	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
// 	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
// 	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
// 	printf("%d\n", ddd_draw_line(conf, i));*/

// //	i->param = 1;
// //	i->color = 0xAABBCC;
// //	i->content = c1;
// //	printf("%d\n", ddd_draw_rect(conf, i));
// 	mlx_loop(mlx);
// 	return (0);
// }

int main(int c, char **v)
{
	// void		*mlx;
	// void		*win;
	// //t_config	*conf;
	// //t_info		*i;

	// mlx = mlx_init();
	// win = mlx_new_window(mlx, SCREEN_X, SCREEN_Y, SCREEN_NAME);
	//void **c;
	//void **c1;

	// c = (void **)malloc(2);
	// c[0] = (void *)init_vector2(SCREEN_X / 2, SCREEN_Y / 2);
	// c[1] = (void *)init_vector2(200, 100);
	// c1 = (void **)malloc(6);
	// c1[0] = (void *)init_vector2(280, 250);
	// c1[1] = (void *)init_vector2(370, 310);
	// c1[2] = (void *)init_vector2(230, 310);
	// c1[3] = (void *)init_vector2(320, 250);
	// c1[4] = (void *)init_vector2(300, 370);
	// c1[5] = (void *)init_vector2(280, 250);


	// if (!(conf = init_conf(mlx, win)) || !(i = init_info(0, 0xFF0000, 6, c1)))
	// 	return (1);

	// t_mtx4	*test = mtx4_init(1.0f);
	// t_mtx4	*rev = mtx4_init(0.0f);
	// //t_mtx4	*mult = mtx4_init(0.0f);

	// mtx4_set(test, 0, 0, 1.0f);
	// mtx4_set(test, 1, 0, 0.0f);
	// mtx4_set(test, 2, 0, 0.0f);
	// mtx4_set(test, 3, 0, 0.0f);

	// mtx4_set(test, 0, 1, 0.0f);
	// mtx4_set(test, 1, 1, 1.0f);
	// mtx4_set(test, 2, 1, 0.0f);
	// mtx4_set(test, 3, 1, 0.0f);

	// mtx4_set(test, 0, 2, 0.0f);
	// mtx4_set(test, 1, 2, 0.0f);
	// mtx4_set(test, 2, 2, 1.0f);
	// mtx4_set(test, 3, 2, 0.0f);

	// mtx4_set(test, 0, 3, 5.0f);
	// mtx4_set(test, 1, 3, 5.0f);
	// mtx4_set(test, 2, 3, 5.0f);
	// mtx4_set(test, 3, 3, 1.0f);

	// mtx4_print(test);

	// mtx4_rot_x(45, test, rev);
	// free(test);
	// test = rev;
	// mtx4_print(test);

	// rev = mtx4_init(0.0f);
	// mtx4_rot_y(45, test, rev);
	// free(test);
	// test = rev;
	// mtx4_print(test);

	// rev = mtx4_init(0.0f);
	// mtx4_rot_z(45, test, rev);
	// free(test);
	// test = rev;
	// mtx4_print(test);

	// mtx4_rev(test, rev);
	// mtx4_print(rev);

	// mtx4_mult(test, rev, mult);
	// mtx4_print(mult);

	// mtx4x3_mult(test, rev, mult);
	// mtx4_print(mult);


	// void		*mlx;
	// void		*win;
	// t_config	*conf;
	// t_info		*i;

	// mlx = mlx_init();
	// win = mlx_new_window(mlx, SCREEN_X, SCREEN_Y, SCREEN_NAME);
	// void **c;
	// void **c1;

	// c = (void **)malloc(2);
	// c[0] = (void *)init_vector2(SCREEN_X / 2, SCREEN_Y / 2);
	// c[1] = (void *)init_vector2(200, 100);
	// c1 = (void **)malloc(6);
	// c1[0] = (void *)init_vector2(280, 250);
	// c1[1] = (void *)init_vector2(370, 310);
	// c1[2] = (void *)init_vector2(230, 310);
	// c1[3] = (void *)init_vector2(320, 250);
	// c1[4] = (void *)init_vector2(300, 370);
	// c1[5] = (void *)init_vector2(280, 250);


	// if (!(conf = init_conf(mlx, win)) || !(i = init_info(0, 0xFF0000, 6, c1)))
	// 	return (1);

	// t_mtx4	*test = mtx4_init(1.0f);
	// t_mtx4	*rev = mtx4_init(0.0f);

	// mtx4_set(test, 0, 0, -4.0f);
	// mtx4_set(test, 1, 0, -2.0f);
	// mtx4_set(test, 2, 0, -7.0f);
	// mtx4_set(test, 3, 0, 8.0f);

	// mtx4_set(test, 0, 1, 2.0f);
	// mtx4_set(test, 1, 1, 7.0f);
	// mtx4_set(test, 2, 1, 4.0f);
	// mtx4_set(test, 3, 1, 9.0f);

	// mtx4_set(test, 0, 2, 2.0f);
	// mtx4_set(test, 1, 2, 0.0f);
	// mtx4_set(test, 2, 2, 6.0f);
	// mtx4_set(test, 3, 2, -3.0f);

	// mtx4_set(test, 0, 3, 6.0f);
	// mtx4_set(test, 1, 3, 4.0f);
	// mtx4_set(test, 2, 3, -10.0f);
	// mtx4_set(test, 3, 3, -4.0f);

	// mtx4_print(test);
	// mtx4_rev(test, rev);
	// mtx4_print(rev);

	// LAST CHANGES ===========================================================

	// printf("%f\n", mtx3_det(test, 0, 0));
	// printf("%f\n", mtx3_det(test, 1, 0));
	// printf("%f\n", mtx3_det(test, 2, 0));
	// printf("%f\n", mtx3_det(test, 3, 0));
	// printf("%f\n", mtx4_det(test));
	//ddd_draw_lines_arr(conf, i);
	/*for (int j = 0; j <= SCREEN_Y; j++)
	{	if (1)//!(j % 40))
			for (int k = 0; k <= SCREEN_X; k++)
				if ((j == 0 || j == SCREEN_Y))// && !(k % 40))
				{
					printf("%d\n", ddd_draw_line(conf, i));
					((t_vector2 *)(i->content[1]))->x = k;
					((t_vector2 *)(i->content[1]))->y = j;
					if (i->color == 0xFFFFFF)
						i->color = 0x000000;
					i->color += 0x107010;
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
					if (i->color == 0xFFFFFF)
						i->color = 0x000000;
					i->color += 0x107010;
					printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
					printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
					printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
					printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
				}
	}*/


	/*((t_vector2 *)(i->content[1]))->x = SCREEN_X / 4;
	((t_vector2 *)(i->content[1]))->y = SCREEN_Y;
	i->color = 0xFFFFFF;
	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
	printf("%d\n", ddd_draw_line(conf, i));

	((t_vector2 *)(i->content[1]))->x = SCREEN_X / 4;
	((t_vector2 *)(i->content[1]))->y = 0;
	i->color = 0xFF0000;
	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
	printf("%d\n", ddd_draw_line(conf, i));

	((t_vector2 *)(i->content[1]))->x = 3 * (SCREEN_X / 4);
	((t_vector2 *)(i->content[1]))->y = 0;
	i->color = 0x00FF00;
	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
	printf("%d\n", ddd_draw_line(conf, i));

	((t_vector2 *)(i->content[1]))->x = 3 * (SCREEN_X / 4);
	((t_vector2 *)(i->content[1]))->y = SCREEN_Y;
	i->color = 0x0000FF;
	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
	printf("%d\n", ddd_draw_line(conf, i));



	((t_vector2 *)(i->content[1]))->x = 0;
	((t_vector2 *)(i->content[1]))->y = SCREEN_Y / 4;
	i->color = 0xFFFFFF;
	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
	printf("%d\n", ddd_draw_line(conf, i));

	((t_vector2 *)(i->content[1]))->x = 0;
	((t_vector2 *)(i->content[1]))->y = 3 * (SCREEN_Y / 4);
	i->color = 0xFF0000;
	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
	printf("%d\n", ddd_draw_line(conf, i));

	((t_vector2 *)(i->content[1]))->x = SCREEN_X;
	((t_vector2 *)(i->content[1]))->y = SCREEN_Y / 4;
	i->color = 0x00FF00;
	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
	printf("%d\n", ddd_draw_line(conf, i));

	((t_vector2 *)(i->content[1]))->x = SCREEN_X;
	((t_vector2 *)(i->content[1]))->y = 3 * (SCREEN_Y / 4);
	i->color = 0x0000FF;
	printf("LINE FROM X %d",((t_vector2 *)(i->content[0]))->x);
	printf(" Y %d",((t_vector2 *)(i->content[0]))->y);
	printf(" TO X %d",((t_vector2 *)(i->content[1]))->x);
	printf(" Y %d\n",((t_vector2 *)(i->content[1]))->y);
	printf("%d\n", ddd_draw_line(conf, i));*/

//	i->param = 1;
//	i->color = 0xAABBCC;
//	i->content = c1;
//	printf("%d\n", ddd_draw_rect(conf, i));
//	mlx_loop(mlx);
	if (c != 2)
	{
		printf("UDI NAXUY, GDE TZ???\n");
		return(0);
	}

	t_mlx *mlx;
	mlx = ddd_mlx_init(SCREEN_X, SCREEN_Y, SCREEN_NAME);

	t_dots	*dots;
	read_dots(v[1], &dots);
	t_cam *cam = init_cam();


	if (dots != NULL)
	{
		print_dots(dots);
		solve_dots(dots, cam);
		//fill_screen(&dots);
		connect_dots(mlx, &dots);
	}
	t_mouse	*mouse = init_mouse(mlx, 0.1f, &cam, dots);
	mouse->error = 10;
	mlx_hook(mlx->win, 6, 0, hook_mouse_move, mouse);
	mlx_loop(mlx->mlx);
	return (0);
}
