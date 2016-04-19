 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 17:37:08 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/05 17:37:10 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

List	*ft_lst_addend(List *list, void *data)
{
	List	*tmp;
	List	*plist;

	plist = ft_lst_create(data);						/* Ajout d'un maillon en fin de chaine */
	if (!list)
		return (plist);
	else
	{
		tmp = list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = plist;
	}
	free (plist);
	return (list);
}
