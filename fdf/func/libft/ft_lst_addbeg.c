/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addbeg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 17:37:21 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/05 17:37:25 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

List	*ft_lst_addbeg(List *old, void *data)
{
	List 	*list;

	list = ft_lst_create(data);
	if (list)
		list->next = old;								/* Ajout d'un maillon en debut de chaine */
	return (list);
}
