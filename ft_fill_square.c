/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:20:28 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:20:30 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fill_square(t_fill *hren, char **map, int i, int len)
{
	int x;
	int y;

	y = -1;
	if (i == len)
		return (1);
	while (map[++y])
	{
		x = 0;
		while (map[y][x])
		{
			if (ft_can_place(hren[i], map, y, x))
			{
				ft_place_it(hren[i], map, y, x);
				if (ft_fill_square(hren, map, i + 1, len))
					return (1);
				else
					ft_delete(hren[i], map);
			}
			x++;
		}
	}
	return (0);
}

void	ft_delete(t_fill hren, char **map)
{
	int x;
	int y;

	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == hren.bukva)
				map[y][x] = '.';
			x++;
		}
		y++;
	}
}

void	ft_place_it(t_fill hren, char **map, int y, int x)
{
	int index;

	index = 0;
	while (index < 4)
	{
		if (index > 0)
		{
			x += hren.x[index] - hren.x[index - 1];
			y += hren.y[index] - hren.y[index - 1];
		}
		map[y][x] = hren.bukva;
		index++;
	}
}
