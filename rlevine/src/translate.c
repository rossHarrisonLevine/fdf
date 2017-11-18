/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevine <rlevine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 14:59:29 by rlevine           #+#    #+#             */
/*   Updated: 2017/11/17 14:59:38 by rlevine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** translate will move the map depending on the values
** of x (horizantal) and y (vertical)
*/

static void		translate_row(float x, float y, float z, t_point *point)
{
	while (point)
	{
		point->x += x;
		point->y += y;
		point->z += z;
		point = point->right;
	}
}

void			translate_map(float x, float y, float z, t_point *point)
{
	t_point	*tmp;
	t_point	*row;

	tmp = point;
	while (tmp)
	{
		row = tmp;
		translate_row(x, y, z, row);
		tmp = tmp->down;
	}
}
