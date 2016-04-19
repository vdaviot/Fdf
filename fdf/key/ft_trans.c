/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trans.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 22:30:36 by vdaviot           #+#    #+#             */
/*   Updated: 2015/02/09 22:30:38 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_trans(t_env *env, t_coord *p)
{
	float	mx;
	float	my;

	mx = (float)X_SIZE + env->zoomplus;
	my = (float)Y_SIZE + env->zoomplus;
	while (p)
	{
		p->x = (p->x - env->c.x) * mx + env->count + 300;
		p->y = (p->y - env->c.y) * my + env->high + 300;
		p = p->next;
	}
}
