/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:53:09 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/10 23:51:00 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(char c, va_list args, int *len)
{
	if (c == 'c')
		ft_printf_c(args, len);
	if (c == 's')
		ft_printf_s(args, len);
	if (c == 'p')
		ft_printf_p(args, len);
	if (c == 'd')
		ft_printf_d(args, len);
	if (c == 'i')
		ft_printf_i(args, len);
	if (c == 'u')
		ft_printf_u(args, len);
	if (c == 'x')
		ft_printf_x(args, len);
	if (c == 'X')
		ft_printf_bx(args, len);
	if (c == '%')
		ft_printf_per(len);
}
