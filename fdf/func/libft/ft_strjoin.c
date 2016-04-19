/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:28:28 by vdaviot           #+#    #+#             */
/*   Updated: 2014/11/11 13:28:29 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char 	*t;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(t = (char*)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s2[j])
	{
		while (s1[i])
		{
			t[i] = s1[i];
			i++;
		}
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';
	return (t);
}
