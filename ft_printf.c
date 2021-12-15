/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:13:19 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/11 00:09:24 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, s);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] && ft_in_list(s[i + 1], "cspdiuxX%"))
		{
			ft_format(s[i + 1], args, &len);
			i += 2;
		}
		else
		{
			write(1, &s[i], 1);
			len++;
			i++;
		}
	}
	return (len);
}
