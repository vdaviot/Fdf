/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                      :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 17:32:11 by vdaviot           #+#    #+#             */
/*   Updated: 2014/11/27 17:33:07 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	ft_filler(char *save, char **line)
{
	int				i;

	i = 0;
	while (save[i] != '\n' && save[i] != '\0')
		i++;
	if (save[i] == '\0')
		*line = ft_strdup(save);
	else
		*line = ft_strsub(save, 0, i);
}

int		get_next_line(int const fd, char **line)
{
	char			*buffer;
	static	char	*save;
	int				res;

	if (!save)
	{
		if (!(buffer = ft_strnew(BUFF_SIZE)))
			return (-1);
		buffer[BUFF_SIZE] = '\0';
		while ((res = read(fd, buffer, BUFF_SIZE)))
		{
			save = !save ? ft_strdup(buffer) : ft_strjoin(save, buffer);
			if (res == -1)
				return (-1);
			free (buffer);
			buffer = ft_strnew(BUFF_SIZE);
		}
	}
	if ((!save || *save == '\0'))
		return (0);
	*save == '\n' ? save++ : save;
	ft_filler(save, line);
	while (*save != '\n' && *save != '\0')
		save++;
	return (1);
}
