/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:15:45 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:15:58 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_valid(char **av)
{
	int		fd;
	char	*buf;

	buf = ft_strnew(600);
	if ((fd = open(av[1], O_RDONLY)) < 0)
	{
		write(1, "error\n", 6);
		exit(0);
	}
	read(fd, buf, 600);
	if (num_fig(buf) <= 26 && valid_ch(buf) == 0 &&
		valid_p1(buf) == 0 && valid_p2(buf) == 0)
	{
		free(buf);
		return (1);
	}
	free(buf);
	return (0);
}
