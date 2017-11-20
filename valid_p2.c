/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_p2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:24:36 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:24:38 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int	check_p2(char *buf, int i, int j, char *p)
{
	int ch;

	ch = 0;
	while (++j != 20)
	{
		p[j] = buf[i];
		if (p[j] == '#')
			ch++;
		i++;
	}
	if (ch != 4)
		return (0);
	p[j] = '\0';
	if (v_patall(p) == 0)
		return (0);
	return (1);
}

int	valid_p2(char *buf)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = -1;
	p = (char*)malloc(sizeof(char) * 21);
	while (buf[i] != '\0')
	{
		if (check_p2(buf, i, j, p) == 0)
		{
			free(p);
			return (1);
		}
		j = -1;
		i = i + 21;
	}
	free(p);
	return (0);
}
