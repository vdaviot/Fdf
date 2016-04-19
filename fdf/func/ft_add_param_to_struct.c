/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_param_to_struct.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 23:59:22 by vdaviot           #+#    #+#             */
/*   Updated: 2015/01/08 23:59:23 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static void	ft_iso(t_env *env, int	y, int x, t_coord *ptr)
{
	static int k = 0;
	float	t;
	float	i;
	float	j;

	i = 1;
	j = 1;
	t = x;
	ptr->x = (0.71 * (x - y));
	ptr->y = (0.41 * (x + y) - 0.82 * ptr->z);
	if (!k)
	{
		env->c.x = ptr->x;
		env->c.y = ptr->y;
	}
	k++;
	if (ptr->x < env->c.x)
		env->c.x = ptr->x;
	if (ptr->y < env->c.y)
		env->c.y = ptr->y;
}
void	ft_destroy_lst(List *list)
{
	List	*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
}

void	ft_add_param_to_struct(t_env *env, t_coord **ptr, List *list)
{
	int				x;
	int				y;
	t_coord 		*tmp;

	*ptr = (t_coord *)malloc(sizeof(t_coord));
	tmp = *ptr;
	y = 0;
	x = 0;
	while (list) 
	{
		tmp->z = ft_strcmp(list->data, "\n") ? ft_atoi(list->data) : -1;
		if (ft_strcmp(list->data, "\n"))
		{
			ft_iso(env, y, x, tmp);
			x++;
		}
		if (list && !ft_strcmp(list->data, "\n"))
		{
			x = 0;
			y++;
		}
		list = list->next;
		if (list)
		{
			tmp->next = (t_coord *)malloc(sizeof(t_coord));
			tmp = tmp->next;
		}
		else
			tmp->next = NULL;
	}
	ft_destroy_lst(list);
}
