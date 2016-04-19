/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 15:47:16 by vdaviot           #+#    #+#             */
/*   Updated: 2015/02/09 15:47:18 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_get_size(List *list, t_coord *ptr)
{
	int		line;
	int		col;
	List	*tmp;

	col = 0;
	line = -1;
	tmp = ft_dup_lst(list);
	while (tmp)
	{
		if ((ft_strcmp(tmp->data, "\n")) != 0)
			col++;
		else
			line++;
		tmp = tmp->next;
	}
	ptr->col = col / line;
	ptr->line = line;
}
