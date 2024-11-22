/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 03:23:49 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/20 06:53:22 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
		ft_putnbr(n, count);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + 48, count);
	}
	else
	{
		ft_putnbr(n / 10, count);
		ft_putchar((n % 10) + 48, count);
	}
}
