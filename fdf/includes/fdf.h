/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 17:23:16 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/22 17:23:18 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <math.h>
# include "libft.h"
# define WIN_X 1920
# define WIN_Y 1080
# define AXE_X 500
# define AXE_Y 200
# define Y_SIZE 30
# define X_SIZE 30
# define BUFF_SIZE 32
# define COLOR 0x009900
# define TETA 0.087266462599716

typedef struct 	s_coord
{
	float			x;
	float			y;
	float			z;
	int			flag;
	int			fx;
	int			fy;
	int			color;
	int			col;
	int			line;
	struct s_coord 	*next;
}				t_coord;

typedef struct 	s_env
{
	void	*mlx;
	void	*win;
	char	*img;
	char	*data;
	int		bpp;
	t_coord	c;
	t_coord *ptr2;
	t_coord *copy;
	int		sline;
	int		end;
	int		fd;
	char	**val;
	int		i;
	int		padx;
	int		pady;
	int		x;
	int		y;
	int		z;
	int		cumul;
	float	count;
	float	high;
	float	zoomplus;
	int		cf;
	int		color;
	int		a;
}				t_env;

int			expose_hook(t_env *env);
void		ft_draw(t_env *env, t_coord *ptr, t_coord *ptr1);
void		ft_get_size(List *list, t_coord *ptr);
void		*ft_memcpy(void *dest, const void *src, size_t n);
int			ft_key_hook(int key_code, t_env *env);
int			ft_expose_hook(t_env *env);
int			get_next_line(int const fd, char **line);
List		*ft_get_params_to_lst(char **tab, List *list);
void		ft_add_param_to_struct(t_env *env, t_coord **ptr, List *list);
void		ft_image_pixel_put(t_env *env, int x, int y, int color);
void		ft_draw_column(t_env *img, t_coord *ptr);
void		ft_draw_line(t_env *img, t_coord *ptr);
List		*ft_dup_lst(List *list);
t_coord		*ft_dup_struct(t_env *env);
void		trans(t_env *env, t_coord *p);
void		ft_destroy_struct(t_coord *ptr);
void		ft_key_mv_down(t_env *env);
void		ft_key_mv_up(t_env *env);
void		ft_key_mv_left(t_env *env);
void		ft_key_mv_right(t_env *env);
void		ft_key_exit(t_env *env);
void		ft_key_zoom(t_env *env);
void		ft_key_dezoom(t_env *env);
void		ft_key_rotate_up(t_env *env);
void		ft_trans(t_env *env, t_coord *p);
void		ft_roll_face_color(t_env *env, int key_code);

#endif