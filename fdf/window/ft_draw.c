/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 17:26:07 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/22 17:26:09 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static	void	ft_dx(int dx, int dy, int xinc, int yinc, t_env *env)
{
	env->cumul = dx / 2;
	env->i = 1;
	while (env->i <= dx)
	{
		env->x += xinc;
		env->cumul += dy;
		env->i++;
		if (env->cumul >= dx)
		{
			env->cumul -= dx;
			env->y += yinc;
		}
		ft_image_pixel_put(env, env->x, env->y, env->color);
	}
}

static void		ft_dy(int dx, int dy, int xinc, int yinc, t_env *env)
{
	env->cumul = dy / 2;
	env->i = 1;
	while (env->i <= dy)
	{
		env->y += yinc;
		env->cumul += dx;
		env->i++;
		if (env->cumul >= dy)
		{
			env->cumul -= dy;
			env->x += xinc;
		}
		ft_image_pixel_put(env, env->x, env->y, env->color);
	}
}

void	ft_draw(t_env *env, t_coord *ptr, t_coord *ptr1)
{
	int		dy;
	int		dx;
	int		xinc;
	int		yinc;

	if (ptr->z == -1 || ptr1->z == -1)
		return ;
	env->x = ptr->x;
	env->y = ptr->y;
	dx = ptr1->x - ptr->x;
	dy = ptr1->y - ptr->y;
	xinc = (dx > 0) ? 1 : -1;
	yinc = (dy > 0) ? 1 : -1;
	dx = abs(dx);
	dy = abs(dy);
	ft_image_pixel_put(env, env->x, env->y, env->color);
	if (dx > dy)
		ft_dx(dx, dy, xinc, yinc, env);
	else
		ft_dy(dx, dy, xinc, yinc, env);
}
