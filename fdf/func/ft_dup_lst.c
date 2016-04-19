/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 15:55:15 by vdaviot           #+#    #+#             */
/*   Updated: 2015/01/20 15:55:18 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

List	*ft_dup_lst(List *list)
{
	List 	*tmp;

	tmp = (List*)malloc(sizeof(List));
	if (tmp && list)
		*tmp = *list;
	return (tmp);
}
