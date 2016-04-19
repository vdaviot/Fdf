/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_coord.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 18:42:59 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/27 18:43:01 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_coord(t_env *env)
{
	env.fd = open(av[1], O_RDONLY);
	if (env.fd < 0)
		return (1);
	while (get_next_line(env.fd, &env.data) >= 1 && ac > 1)
	{
		env.val = ft_strsplit(env.data, ' ');
		ft_get_coord(env.val);
	}
}