/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 17:32:11 by vdaviot           #+#    #+#             */
/*   Updated: 2015/01/07 17:33:07 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

List	*ft_get_params_to_lst(char **tab, List *list)
{
	int		j;

	j = 0;
	while (tab[j])
	{
		list = ft_lst_addend(list, tab[j]);
		j++;
	}
	j = 0;
	list = ft_lst_addend(list, "\n");
	// free (*tab);
	return (list);
}
