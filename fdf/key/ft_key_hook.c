/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 200.14/0.12/22 0.17:39:35 by vdaviot           #+#    #+#             */
/*   Updated: 200.14/0.12/22 0.17:39:36 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		ft_key_hook(int key_code, t_env *env)
{
	if (key_code == 65307)
		ft_key_exit(env);
	if (key_code == 65363)
		ft_key_mv_right(env);
	if (key_code == 65361)
		ft_key_mv_left(env);
	if (key_code == 65364)
		ft_key_mv_up(env);
	if (key_code == 65362)
		ft_key_mv_down(env);
	if (key_code == 65453)
		ft_key_dezoom(env);
	if (key_code == 65451)
		ft_key_zoom(env);
	if (key_code > 96 && key_code < 123)
		ft_roll_face_color(env, key_code);
	ft_expose_hook(env);
	return (0);
}

// a = tmp->y;
// tmp->y = cos(TETA) * tmp->y + -sin(TETA) * tmp->z;
// tmp->z = sin(TETA) * a + cos(TETA) * tmp->z;			mettre - devant chaque TETA pour inverser la rotation 
// a = tmp->x;
// tmp->x = tmp->x * cos(TETA) + tmp->z * (-sin(TETA));
// tmp->z = a * sin(TETA) + tmp->z * cos(TETA);