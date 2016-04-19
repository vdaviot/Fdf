/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 17:27:04 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/22 17:27:06 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

static void	ft_init(t_env *env)
{
	env->color = 0xfdffef;
	env->mlx = mlx_init();
	env->win = mlx_new_window(env->mlx, WIN_X, WIN_Y, "42");
	env->img = mlx_new_image(env->mlx, WIN_X, WIN_Y);
	env->data = mlx_get_data_addr(env->img, &env->bpp, &env->sline, &env->end);
	env->count = 0;
	env->high = 0;
	env->copy = NULL;
	env->zoomplus = 0;
	env->padx = X_SIZE;
	env->pady = Y_SIZE;
	env->a = 1;
	if (!(env->ptr2 = (t_coord*)malloc(sizeof(t_coord))))
		return ;
}

int		main(int ac, char **av)
{
	t_env	env;
	List	*list;
	t_coord	*ptr;

	list = NULL;
	if (av[1])
	{
		if (!(env.fd = open(av[1], O_RDONLY)))
			return (-1);
		while (get_next_line(env.fd, &env.data))
		{
			env.val = ft_strsplit(env.data, ' ');
			list = ft_get_params_to_lst(env.val, list);
			free (env.val);
		}
		ft_init(&env);
		ft_add_param_to_struct(&env, &ptr, list);
		env.ptr2 = ptr;
		mlx_key_hook(env.win, ft_key_hook, &env);
		mlx_expose_hook(env.win, ft_expose_hook, &env);
		mlx_loop_hook(env.win, ft_key_hook, &env);
		mlx_loop(env.mlx);
	}
	return (0);
}
