/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_to_center.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevine <rlevine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 14:58:45 by rlevine           #+#    #+#             */
/*   Updated: 2017/11/17 14:58:53 by rlevine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	put_to_center(t_super *s)
{
	zoom(0.8 * (MIN(s->win->w / s->map->w, s->win->h / s->map->h)), s->map);
	rotate('z', 1, PI, s->map);
	rotate('y', -1, 5 * PI / 6, s->map);
	rotate('x', -1, PI / 6, s->map);
}
