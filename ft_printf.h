/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:18:15 by omoudni           #+#    #+#             */
/*   Updated: 2021/12/10 23:55:24 by omoudni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_in_list(char c, char *s);
void	ft_format(char c, va_list args, int *i);
void	ft_printf_c(va_list args, int *len);
void	ft_printf_s(va_list args, int *len);
void	ft_printf_p(va_list args, int *len);
void	ft_printf_d(va_list args, int *len);
void	ft_printf_i(va_list args, int *len);
void	ft_printf_u(va_list args, int *len);
void	ft_printf_x(va_list args, int *len);
void	ft_printf_bx(va_list args, int *len);
void	ft_printf_per(int *len);

#endif
