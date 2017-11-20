/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_p1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:24:24 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:24:25 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_p1(char *buf, int i, int m, int n)
{
	while (buf[i] != '\0')
	{
		while (buf[i] != '\n' && buf[i] != '\0')
		{
			i++;
			n++;
		}
		if (n != 4 || (n == 4 && buf[i] == '\0'))
			return (1);
		if (buf[i + 1] == '\0' && m == 3)
			return (0);
		if (buf[i + 1] == '\0' && m != 3)
			return (1);
		if (m == 3)
			break ;
		n = 0;
		i = i + 1;
		m++;
	}
	return (1);
}

int	valid_p1(char *buf)
{
	int i;
	int m;
	int n;

	i = 0;
	n = 0;
	m = 0;
	while (buf[i] != '\0')
	{
		if (check_p1(buf, i, m, n) == 0)
			return (0);
		n = 0;
		i = i + 21;
		m = 0;
	}
	return (1);
}
