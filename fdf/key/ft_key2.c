/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 15:39:56 by vdaviot           #+#    #+#             */
/*   Updated: 2015/02/09 15:39:58 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_key_mv_right(t_env *env)
{
	env->count += 10;
}

void	ft_key_mv_left(t_env *env)
{
	env->count -= 10;
}

void	ft_key_mv_up(t_env *env)
{
	env->high += 10;
}

void	ft_key_mv_down(t_env *env)
{
	env->high -= 10;
}
