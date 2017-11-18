/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevine <rlevine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 14:56:45 by rlevine           #+#    #+#             */
/*   Updated: 2017/11/17 14:57:03 by rlevine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	draw_row(t_point *row, t_win *win)
{
	while (row)
	{
		if (row->right)
			draw_line(row, row->right, win);
		if (row->down)
			draw_line(row, row->down, win);
		row = row->right;
	}
}

void		draw_map(t_super *s)
{
	t_point	*tmp;

	tmp = s->map->map;
	mlx_clear_window(s->win->mlx, s->win->win);
	while (tmp)
	{
		draw_row(tmp, s->win);
		tmp = tmp->down;
	}
}
