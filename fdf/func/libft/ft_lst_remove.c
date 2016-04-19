/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 17:36:02 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/05 17:36:04 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

List	*ft_lst_remove(List *list)
{
	while (list)
		ft_lst_remove_first(list);						/* Destruction de la liste */
	return (list);
}
