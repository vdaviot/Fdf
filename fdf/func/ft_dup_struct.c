/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 15:55:24 by vdaviot           #+#    #+#             */
/*   Updated: 2015/01/20 15:55:30 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_coord		*ft_dup_struct(t_env *env)
{
	t_coord *tmp;
	t_coord *ptr;
	t_coord *pouet;

	tmp = (t_coord *)malloc(sizeof(t_coord));
	pouet = tmp;
	ptr = env->ptr2;
	while (ptr && tmp)
	{
		tmp->x = (ptr->x - env->c.x) * env->padx + env->count;
		tmp->y = (ptr->y - env->c.y) * env->pady + env->high;
		tmp->z = ptr->z;
		tmp->next = NULL;
		if (ptr->next)
		{
			tmp->next = (t_coord *)malloc(sizeof(t_coord));
			tmp = tmp->next;
		}
		ptr = ptr->next;
	}
	return (pouet);
}