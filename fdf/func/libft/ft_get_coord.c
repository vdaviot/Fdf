/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_coord.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/28 16:46:24 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/28 16:46:26 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"
#include <stdlib.h>

int		main(int ac, char **av)
{
	t_env *env;

	env.fd = open(av[1], O_RDONLY);
	if (env.fd < 0)
		return (1);
	while (get_next_line(env.fd, &env.data) >= 1 && ac > 1)
	{
		env.map = ft_strsplit(env.data, ' ');
		printf("%s\n", env.map[0]);
	}
	return (0);
}