/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:56:49 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/10 20:37:21 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	unsigned int	nb;
	char			c;

	if (n < 0)
	{
		write(1, "-", 1);
		(*len)++;
		nb = -n;
	}
	else
		nb = n;
	if (nb < 10)
	{
		c = nb + 48;
		write (1, &c, 1);
		(*len)++;
	}
	else
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
}

void	ft_printf_d(va_list args, int *len)
{
	int			n;

	n = va_arg(args, int);
	ft_putnbr(n, len);
}
