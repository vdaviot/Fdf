/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:26:14 by vdaviot           #+#    #+#             */
/*   Updated: 2014/11/08 12:26:48 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char		*str;

	str = dest;
	while (str && *str)
		str++;
	while (str && src != '\0' && *src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (dest);
}
