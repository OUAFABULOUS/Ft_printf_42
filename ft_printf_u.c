/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:56:49 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/10 23:35:50 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(long int n, int *len)
{
	unsigned long int	nb;
	char				c;

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
		ft_putnbr_u(nb / 10, len);
		ft_putnbr_u(nb % 10, len);
	}
}

void	ft_printf_u(va_list args, int *len)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putnbr_u(n, len);
}
