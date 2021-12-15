/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:56:49 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/10 22:41:59 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long p, int *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (p < 16)
	{
		write (1, &base[p], 1);
		(*i)++;
	}
	else
	{
		ft_puthex(p / 16, i);
		ft_puthex(p % 16, i);
	}
}

void	ft_printf_p(va_list args, int *i)
{
	unsigned long long	p;

	p = va_arg(args, unsigned long long);
	write(1, "0x", 2);
	*i += 2;
	ft_puthex(p, i);
}
