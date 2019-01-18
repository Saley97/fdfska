/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowlvlddd.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraugr- <edraugr-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 14:56:09 by edraugr-          #+#    #+#             */
/*   Updated: 2019/01/18 13:10:55 by edraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOWLVLDDD_H
# define LOWLVLDDD_H

# include "../libft/libft.h"
# include "../minilibx/mlx.h"
# include <stdlib.h>
# include <math.h>
# include <stdio.h>

# define FUNC_KO 0
# define FUNC_INV_PRM -1
# define FUNC_OK 1
# define UNIT 50
# define SCREEN_X 1920
# define SCREEN_Y 1080
# define CAM_ISO 0
# define CAM_PERSP 1

# define ABS(x) (((x) >= 0) ? (x) : (-(x)))
# define SIGN(x) ((x) >= 0 ? 1 : -1)

typedef struct		s_mlx
{
	int				width;
	int				height;
	void			*mlx;
	void			*win;
}					t_mlx;

typedef struct		s_vec2
{
	int				x;
	int				y;
}					t_vec2;

typedef struct		s_vec3
{
	float			x;
	float			y;
	float			z;
}					t_vec3;

typedef struct		s_vec4
{
	float			x;
	float			y;
	float			z;
	float			w;
}					t_vec4;

// typedef struct		s_config
// {
// 	int				screen_x;
// 	int				screen_y;
// 	void			*mlx_ptr;
// 	void			*win_ptr;
// }					t_config;

// typedef struct		s_prim_info
// {
// 	int				param;
// 	int				color;
// 	void			**content;
// 	int				size;
// }					t_info;

// typedef struct		s_vector2
// {
// 	int				x;
// 	int				y;
// }					t_vector2;

// typedef struct		s_vector3
// {
// 	double			x;
// 	double			y;
// 	double			z;
// }					t_vector3;

// typedef struct		s_vector4
// {
// 	double			x;
// 	double			y;
// 	double			z;
// 	double			w;
// }					t_vector4;

typedef struct		s_mtx
{
	double			*mtx;
	unsigned int	r;
	unsigned int	c;
}					t_mtx;

typedef struct		s_dots
{
	int		xc;
	int		yc;
	t_vec4	**local;
	t_vec3	**cam;
	t_vec2	**screen;
}					t_dots;

typedef struct		s_mtx4
{
	float			val[16];
}					t_mtx4;

typedef struct		s_mtx3
{
	float			val[9];
}					t_mtx3;

typedef struct		s_cam
{
	t_mtx4			*cam;
	t_mtx4			*camops;
	int				mode;
	float			focus;
}					t_cam;

typedef struct		s_mouse
{
	int				x;
	int				y;
	int				prev_x;
	int				prev_y;
	int				error;
	float			sence;
	t_cam			**cam;
	t_dots			*dots;
	t_mlx			*mlx;
}					t_mouse;

t_dots				*init_dots(char *fn);
t_cam				*init_cam(void);
t_mlx				*ddd_mlx_init(int width, int height, char *header);
t_mouse				*init_mouse(t_mlx *mlx, const float sence, t_cam **cam, t_dots *dots);

// int					ddd_draw_dot(t_mlx *mlx, t_info *params);  //todo
// int					ddd_draw_line(t_mlx const *mlx, t_info const *param);  //todo
// int					ddd_draw_rect(t_mlx *mlx, t_info *param);

t_vec2				*vec2_init(void);
t_vec2				*vec2_new(int const x, int const y);
t_vec2				*vec2_opp(t_vec2 const *v);
t_vec2				*vec2_sum(t_vec2 const *v1, t_vec2 const *v2);
t_vec2				*vec2_mult(t_vec2 const *v, float const s);
t_vec2				*vec2_copy(t_vec2 const *v);
void				vec2_print(t_vec2 const *v);

t_vec3				*vec3_init(void);
t_vec3				*vec3_new(float const x, float const y, float const z);
t_vec3				*vec3_opp(t_vec3 const *v);
t_vec3				*vec3_sum(t_vec3 const *v1, t_vec3 const *v2);
void				vec3_print(t_vec3 const *v);

t_vec4				*vec4_init(void);
t_vec4				*vec4_opp(t_vec4 const *v);
t_vec4				*vec4_sum(t_vec4 const *v1, t_vec4 const *v2);
void				vec4_print(t_vec4 const *v);

int					color_lerp(int c1, int c2, float step);
int					draw_line(t_mlx const *mlx, t_vec2 const *v1, t_vec2 const *v2, int c1, int c2);

// t_config			*init_conf(void *mlx, void *win);
// t_vector2			*init_vector2(int x, int y);
// t_info				*init_info(int param, int color, int size, void **content);
// void				info_cpy_contall(t_info *dst, const t_info *src, size_t n);

// int					ddd_draw_line(const t_config *config, const t_info *param);
// int					ddd_draw_rect(t_config *config, t_info *param);
// int					ddd_draw_lines_arr(const t_config *c, const t_info *prm);

// t_mtx3				*mtx3_init(const float val);
// void				mtx3_set(t_mtx3 *mtx, const int col, const int row, const float val);
// float				mtx3_get(const t_mtx3 *mtx, const int col, const int row);
// float				mtx3_det(const t_mtx3 *mtx);
// t_mtx3				*mtx3_initfrom4(const t_mtx4 *scr, const int col, const int row);

t_mtx4				*mtx4_init(const float val);
t_mtx4				*mtx4_cpy(const t_mtx4 *src);
void				mtx4_set(t_mtx4 *mtx, const int col, const int row, const float val);
float				mtx4_get(const t_mtx4 *mtx, const int col, const int row);
float				mtx4_det(const t_mtx4 *mtx);
float				mtx3_det(const t_mtx4 *src, const int out_col, const int out_row);
void				mtx4_rev(const t_mtx4 *src, t_mtx4 *dst);
int					f3t4_col(const int col3, const int out_col);
int					f3t4_row(const int row3, const int out_row);
void				mtx4_mult(const t_mtx4 *a, const t_mtx4 *b, t_mtx4 *dst);
void				mtx4x3_mult(const t_mtx4 *a, const t_mtx4 *b, t_mtx4 *dst);
void				mtx4_set_rot_x(const float a, t_mtx4 *dst);
void				mtx4_set_rot_y(const float a, t_mtx4 *dst);
void				mtx4_set_rot_z(const float a, t_mtx4 *dst);
void				mtx4_rot_x(const float a, const t_mtx4 *src, t_mtx4 *dst);
void				mtx4_rot_y(const float a, const t_mtx4 *src, t_mtx4 *dst);
void				mtx4_rot_z(const float a, const t_mtx4 *src, t_mtx4 *dst);

void				wrdtocam(const t_vec4 *point, const t_mtx4 *camops, t_vec3 *dst);
void				iso_camtoscreen(const t_vec3 *point, t_vec2 *dst);
void				persp_camtoscreen(const t_vec3 *point, t_vec2 *res, const t_cam *cam);

void				redraw(t_dots *dots, const t_cam *cam);
void				solve_dots(t_dots *dots, const t_cam *cam);

//DEBAAAAAAAAAAAAAAAAAAAAAAAAAGGGGG

void				mtx4_print(const t_mtx4 *src);

void				t_dots_del(t_dots **d);

#endif
