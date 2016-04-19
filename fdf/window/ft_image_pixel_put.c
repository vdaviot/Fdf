/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_pixel_put.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 20:53:30 by vdaviot           #+#    #+#             */
/*   Updated: 2015/01/14 20:53:31 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_image_pixel_put(t_env *env, int x, int y, int color)
{
	int			color1;
	int			color2;
	int			color3;
	int			bit_pix;
	float		img_size;

	img_size = WIN_X * WIN_Y * env->bpp / 8;
	if (x < 0 || y < 0 || y * env->sline + x * env->bpp / 8 > img_size 
		|| x >= env->sline / (env->bpp / 8) || y >= img_size / env->sline)
		return ;
	color1 = color;
	color2 = color >> 8;
	color3 = color >> 16;
	bit_pix = env->bpp / 8;
	env->data[y * env->sline + x * bit_pix] = color1;
	env->data[y * env->sline + x * bit_pix + 1] = color2;
	env->data[y * env->sline + x * bit_pix + 2] = color3;
}