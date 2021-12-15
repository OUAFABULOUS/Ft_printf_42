/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:56:49 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/10 22:16:40 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_bx(unsigned int p, int *i)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (p < 16)
	{
		write (1, &base[p], 1);
		(*i)++;
	}
	else
	{
		ft_puthex_bx(p / 16, i);
		ft_puthex_bx(p % 16, i);
	}
}

void	ft_printf_bx(va_list args, int *i)
{
	int		p;

	p = va_arg(args, unsigned long);
	ft_puthex_bx(p, i);
}
