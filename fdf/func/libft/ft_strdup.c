/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:50:50 by vdaviot           #+#    #+#             */
/*   Updated: 2014/11/03 14:50:53 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*s2;

	j = ft_strlen(s);
	if (!(s2 = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)) || !s);
		return (NULL);
	s2[j] = '\0';
	while (j--)
		s2[j] = s[j];
	return ((char*)s2);
}
