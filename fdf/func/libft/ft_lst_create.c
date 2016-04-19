/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 17:52:34 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/05 17:52:35 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

List	*ft_lst_create(void *data)
{
	List	*list;

	list = (List *)malloc(sizeof(list));
	if (!list)
		return (NULL);										/* Creation de la liste chainee */
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
