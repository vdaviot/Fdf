/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 17:35:47 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/05 17:35:49 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lst_len(List *list)
{
	int		i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;								/* Mesurer la taille de la chaine */
	}
	return (i);
}