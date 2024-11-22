/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 04:15:27 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/20 07:35:20 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char *hex, int *count)
{
	int	x;
	int	hexi;

	x = 0;
	if (n >= 16)
		x += ft_puthex(n / 16, hex, count);
	hexi = n % 16;
	ft_putchar(hex[hexi], count);
	x++;
	return (x);
}
