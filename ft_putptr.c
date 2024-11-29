/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 06:40:42 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/29 05:19:53 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr1(unsigned long n, char *hex, int *count)
{
	int	hexi;

	if (n >= 16)
		ft_putptr1(n / 16, hex, count);
	hexi = n % 16;
	ft_putchar(hex[hexi], count);
}

void	ft_putptr(void *ptr, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putstr("0x", count);
	ft_putptr1((unsigned long)ptr, hex, count);
}
