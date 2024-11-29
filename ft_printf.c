/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 00:34:19 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/29 05:19:08 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_per(char c, int *count, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_putunsigned(va_arg(args, unsigned int), count);
	else if (c == 'x')
		ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", count);
	else if (c == 'X')
		ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	else if (c == 'p')
		ft_putptr(va_arg(args, void *), count);
	else if (c == '%')
		ft_putchar('%', count);
	else
		ft_putchar(c, count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			check_per(format[i], &count, args);
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
