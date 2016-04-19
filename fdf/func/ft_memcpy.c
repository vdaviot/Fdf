/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 23:35:04 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/22 23:35:29 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dest1;
	char	*src1;

	i = 0;
	dest1 = (char *)dest;
	src1 = (char *)src;
	if (n == 0 || dest == src)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
