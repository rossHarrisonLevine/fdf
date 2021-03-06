/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevine <rlevine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 14:58:24 by rlevine           #+#    #+#             */
/*   Updated: 2017/11/17 14:58:27 by rlevine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int ac, char **av)
{
	t_super *super;

	if (ac != 2)
	{
		write(1, "Put a map in please! :]\n", 24);
		return (0);
	}
	super = init_super(open(av[1], O_RDONLY));
	put_to_center(super);
	draw_map(super);
	mlx_hook(super->win->win, 2, 0, key_press_hook, super);
	mlx_hook(super->win->win, 3, 0, key_release_hook, super);
	mlx_loop_hook(super->win->mlx, loop_hook, super);
	mlx_loop(super->win->mlx);
}
