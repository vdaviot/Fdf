/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove_first.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 17:36:49 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/05 17:36:50 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

List	*ft_lst_remove_first(List *list)
{
	List	*first;

	first = list;
	list = list->next;									/* Destruction du premier element de la chaine */
	free (first);
	return (list);
}