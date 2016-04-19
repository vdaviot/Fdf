/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 15:39:49 by vdaviot           #+#    #+#             */
/*   Updated: 2015/02/09 15:39:51 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_key_exit(t_env *env)
{
	exit(0);
}
void	ft_key_zoom(t_env *env)
{
	env->padx += 3;
	env->pady += 3;
}

void	ft_key_dezoom(t_env *env)
{
	env->padx -= 3;
	env->pady -= 3;
}

// void	ft_key_rotate_up(t_env *env)
// {
// 	float		a;

// 	if (!env->copy)
// 	{
// 		env->copy = ft_dup_struct(env->ptr2);
// 		ft_trans(env, env->copy);
// 		while (env->copy->next)
// 		{
// 			a = env->copy->y;
// 			env->copy->y = cos(TETA) * env->copy->y + (-sin(TETA)) * env->copy->z;
// 			env->copy->z = sin(TETA) * a + cos(TETA) * env->copy->z;
// 			env->copy = env->copy->next;
// 		}
// 		ft_expose_hook(env, env->copy);
// 	}
// 	else
// 	{
// 		ft_destroy_struct(env->copy);
// 		env->copy = ft_dup_struct(env->ptr2);
// 		ft_trans(env, env->copy);
// 		while (env->copy->next)
// 		{
// 			a = env->copy->x;
// 			env->copy->x = cos(TETA) * env->copy->y + -sin(TETA) * env->copy->z;
// 			env->copy->z = sin(TETA) * a + cos(TETA) * env->copy->z;
// 			env->copy = env->copy->next;
// 		}
// 		ft_expose_hook(env, env->copy);
// 	}
// }






