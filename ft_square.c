/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:22:17 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:22:23 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int			i;
	static int	*tab;

	if (!tab)
	{
		tab = (int*)malloc(sizeof(int) * 11);
		i = -1;
		while (++i < 11)
			tab[i] = (i + 1) * (i + 1);
	}
	i = 0;
	while (i < 11)
	{
		if (nb < tab[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int		ft_can_place(t_fill hren, char **map, int y, int x)
{
	int len;
	int index;

	len = ft_strlen(map[y]);
	index = 0;
	while (index < 4)
	{
		if (index > 0)
		{
			x += hren.x[index] - hren.x[index - 1];
			y += hren.y[index] - hren.y[index - 1];
		}
		if (x >= len || y >= len || x < 0 || y < 0 || map[y][x] != '.')
			return (0);
		index++;
	}
	return (1);
}

char	*ft_strcnew(int size)
{
	char	*new;
	int		i;

	i = -1;
	new = (char*)malloc(sizeof(char) * (size + 1));
	while (++i < size)
	{
		new[i] = '.';
	}
	new[i] = '\0';
	return (new);
}

char	**ft_create_square(int size)
{
	char	**lst;
	int		i;

	i = 0;
	lst = (char**)malloc(sizeof(char*) * (size + 1));
	while (i < size)
	{
		lst[i] = ft_strcnew(size);
		i++;
	}
	lst[i] = NULL;
	return (lst);
}

void	ft_resize_square(t_fill *hren, int len)
{
	int		size;
	char	**map;
	int		i;

	size = 2;
	if (len > 10)
		size = ft_sqrt(len * 4);
	map = ft_create_square(size);
	while (!ft_fill_square(hren, map, 0, len))
	{
		size++;
		map = ft_create_square(size);
	}
	i = -1;
	while (map[++i])
	{
		ft_putstr(map[i]);
		write(1, "\n", 1);
	}
}
