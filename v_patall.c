/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_patall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:23:45 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:23:47 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	v_patall3(char *p)
{
	int i;

	i = -1;
	while (p[++i] != '\0')
	{
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 5] == '#' && p[i + 6] == '#')
			return (1);
	}
	return (0);
}

int	v_patall2(char *p)
{
	int i;

	i = -1;
	while (p[++i] != '\0')
	{
		if (p[i] == '#' && p[i + 5] == '#' &&
			p[i + 6] == '#' && p[i + 7] == '#')
			return (1);
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 5] == '#' && p[i + 10] == '#')
			return (1);
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 6] == '#' && p[i + 7] == '#')
			return (1);
		if (p[i] == '#' && p[i + 4] == '#' &&
			p[i + 5] == '#' && p[i + 9] == '#')
			return (1);
		if (p[i] == '#' && p[i + 5] == '#' &&
			p[i + 6] == '#' && p[i + 11] == '#')
			return (1);
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 4] == '#' && p[i + 5] == '#')
			return (1);
	}
	return (v_patall3(p));
}

int	v_patall1(char *p)
{
	int i;

	i = -1;
	while (p[++i] != '\0')
	{
		if (p[i] == '#' && p[i + 5] == '#' &&
			p[i + 10] == '#' && p[i + 11] == '#')
			return (1);
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 2] == '#' && p[i + 5] == '#')
			return (1);
		if (p[i] == '#' && p[i + 3] == '#' &&
			p[i + 4] == '#' && p[i + 5] == '#')
			return (1);
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 6] == '#' && p[i + 11] == '#')
			return (1);
		if (p[i] == '#' && p[i + 5] == '#' &&
			p[i + 9] == '#' && p[i + 10] == '#')
			return (1);
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 2] == '#' && p[i + 7] == '#')
			return (1);
	}
	return (v_patall2(p));
}

int	v_patall(char *p)
{
	int i;

	i = -1;
	while (p[++i] != '\0')
	{
		if (p[i] == '#' && p[i + 4] == '#' &&
			p[i + 5] == '#' && p[i + 6] == '#')
			return (1);
		if (p[i] == '#' && p[i + 5] == '#' &&
			p[i + 6] == '#' && p[i + 10] == '#')
			return (1);
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 2] == '#' && p[i + 6] == '#')
			return (1);
		if (p[i] == '#' && p[i + 4] == '#' &&
			p[i + 5] == '#' && p[i + 10] == '#')
			return (1);
		if (p[i] == '#' && p[i + 5] == '#' &&
			p[i + 10] == '#' && p[i + 15] == '#')
			return (1);
		if (p[i] == '#' && p[i + 1] == '#' &&
			p[i + 2] == '#' && p[i + 3] == '#')
			return (1);
	}
	return (v_patall1(p));
}