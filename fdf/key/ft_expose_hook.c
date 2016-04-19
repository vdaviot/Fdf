/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expose_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 17:39:26 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/22 17:39:27 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int	ft_expose_hook(t_env *env)
{
	t_coord *ptr;
	t_coord *p;
	t_coord *tmp;

	ptr = ft_dup_struct(env);
	p = ptr;
	tmp = NULL;
	ft_bzero(env->data, WIN_X * WIN_Y * env->bpp / 8);
	while (ptr || tmp)
	{
		if (ptr && ptr->next)
			ft_draw(env, ptr, ptr->next);
		if (tmp && ptr)
			ft_draw(env, tmp, ptr);
		if (tmp)
			tmp = tmp->next;
		if (ptr && ptr->z == -1 && !tmp)
			tmp = p;
		if (ptr)
			ptr = ptr->next;
	}
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	ft_destroy_struct(ptr);
	return (0);
}
