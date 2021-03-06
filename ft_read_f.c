/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:18:55 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:19:07 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_fill	*ft_read_f(int ac, char **av, int *len)
{
	int		fd;
	char	*buf;
	char	**file;
	t_fill	*arr;

	ac = 1;
	buf = ft_strnew(600);
	fd = open(av[1], O_RDONLY);
	read(fd, buf, 600);
	*len = num_fig(buf);
	arr = (t_fill*)malloc(sizeof(t_fill) * *len);
	file = ft_strsplit(buf, '\n');
	arr = ft_fillstr(file, arr, -1, -1);
	close(fd);
	free(buf);
	return (arr);
}
