/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 00:34:19 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/28 08:13:20 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_per(char check, int *count, va_list args)
{
}
int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			*format++;
			check_per(*format, &count, args);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
