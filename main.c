/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:22:44 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:22:45 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int		a;
	t_fill	*struxt;

	if (argc == 2)
	{
		if (ft_valid(argv) == 1)
		{
			struxt = ft_read_f(argc, argv, &a);
			ft_resize_square(struxt, a);
		}
		else
		{
			write(1, "error\n", 6);
			return (1);
		}
	}
	else
	{
		write(1, "usage: ./fillit input_file\n", 27);
		return (1);
	}
	return (0);
}
