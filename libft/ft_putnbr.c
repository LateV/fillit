/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 14:51:32 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/03 14:51:35 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int a;

	a = 1;
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			n = n % 1000000000;
		}
		n = n * (-1);
	}
	while (n / (10 * a) >= 1 && a != 1000000000)
	{
		a = a * 10;
	}
	while (a >= 1)
	{
		ft_putchar('0' + n / a);
		n = n % a;
		a = a / 10;
	}
}
