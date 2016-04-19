/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 15:15:58 by vdaviot           #+#    #+#             */
/*   Updated: 2014/11/10 15:15:59 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!str || !(str = (char*)malloc(sizeof(char*) * (size + 1)))) 
		return (NULL);
	str[size] = '\0';
	ft_strclr(str);
	return (str);
}
